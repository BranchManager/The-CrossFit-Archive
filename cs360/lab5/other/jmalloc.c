#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <string.h>
#include <time.h>
#include <float.h>

//Struct to store free memory

typedef struct memnode
{
	//use in each node
	struct memnode* forward;
	int amount;
	struct memnode* before;
} *memnode;

//Global var to track list
memnode f = NULL;

//Get start of flist
void* free_list_begin()
{
	return f;
}

//Check next flist node
void* free_list_next(void* node)
{
	memnode ret;

	ret = (memnode)node;
	if(ret != NULL){
		ret = ret->forward;}
	else{
		ret = NULL;}

	return (void*)ret;
}


void* my_malloc(size_t size)
{
	int eight_chunks;
	int bytes,inc;
	void* top;
	void* ret;

	//Check how many bytes to allocate
	inc = size;
	eight_chunks = size/8;
	if(size%8){
		eight_chunks = eight_chunks + 2;}

	else{
		eight_chunks = eight_chunks + 1;}

	bytes = eight_chunks * 8;

	//If no flist allocated
	if(f == NULL)
	{
		//If there will be buffer space, give user memory, then add additional space to flist
		if(size <= 8176)
		{
			top = (void*)sbrk(8192);
			*(int*)top = bytes;
			top = (double*)top + 1;
			ret = top;
			top = (double*)top + (eight_chunks - 1);
			if(8192 - bytes >= 12){
				f = (memnode)top;
				f->amount = 8192 - bytes;
				f->forward = NULL;
				f->before = NULL;
			}
		}
		//Otherwise get as much memory needed, no leftover
		else{
			top = (void*)sbrk(bytes);
			*(int*)top = bytes;
			top = (double*)top + 1;
			ret = top;
		}
	}
	else{
		memnode p,q;
		p = f;
		int b,osize;

		//Traverse flist
		b = 0;
		while(p != NULL){
			//If node has enough memory
			if(p->amount >= bytes){
				//If node gets deleted afterwards, relink
				if(p->amount == bytes){
					p->amount = bytes;
					if(p->before == NULL){
						f = p->forward;
						if(p->forward != NULL){
							p->forward->before = NULL;}}
					else if(p->forward == NULL){
						p->before->forward = NULL;}
					else{
						p->before->forward = p->forward;
						p->forward->before = p->before;}
					ret = (int*)p + 2;
					b = 1;
					break;
				}
				
				//If node gets deleted afterwards, relink, give extra 8bytes to user										
				else if(p->size == bytes + 8)
				{
				p->amount = bytes + 8;
				if(p->before == NULL){
					f = p->forward;
					if(p->forward != NULL){
						p->forward->before = NULL;}}
				else if(p->forward == NULL){
					p->before->forward = NULL;}
				else{
					p->before->forward = p->forward;
					p->forward->before = p->before;}
				ret = (int*)p + 2;
				b = 1;
				break;
			}
			//If node must be carved up, carve it up relink list
				else{

					osize = p->amount;
					p->amount = bytes;
					ret = (double*)p + 1;
					b = 1;
					top = (char*)p + bytes;
					q = (memnode)top;
					//If head
					if(p->before == NULL){
						f = q;
						if(p->forward != NULL){
							p->forward->before = q;}

						q->forward = p->forward;
						q->before = p->before;
						q->size =osize - bytes;																					}
					//If tail
					else if(p->forward == NULL){
						p->before->forward = q;

						q->forward = p->forward;
						q->before = p->before;
						q->amount = osize - bytes;
					}
					//If middle
					else{
						p->before->forward = q;
						p->forward->before = q;

						q->forward = p->forward;
						q->before = p->before;
						q->amount = osize - bytes;
					}
					break;
				}
			}
			q = p;
			p = p->forward;
		}
		//If not enough free space
		if(b == 0){
			//Get more buffered space, add leftover to flist
			if(size <= 8176){
				top = (void*)sbrk(8192);
				*(int*)top = bytes;
				top = (double*)top + 1;
				ret = top;
				top = (double*)top + (eight_chunks - 1);
				if(8192 - bytes >= 12){
					q->forward = (memnode)top;
					q->forward->amount = 8192 - bytes;
					q->forward->forward = NULL;
					q->forward->before = q;
				}
			}
			//Otherwise get enough memory, no extra to add to flist
			else{
				top = (void*)sbrk(bytes);
				*(int*)top = bytes;
				top = (double*)top + 1;
				ret = top;
			}
		}

	}
	return ret;		

}

void my_free(void* ptr){
	memnode p,q,r;
	int size;

	r = NULL;

	//Get to end of flist
	q = f;
	while(q != NULL){
		r = q;
		q = q->forward;}

	//Get size of new flist node
	ptr = (double*)ptr - 1 ;
	p = (memnode)ptr;
	size = p->size;

	//Add the new node to the flist
	if(r != NULL){
		r->forward = p;}
	else{
		f = p;}
	p->before = r;

	//Set the node
	p->forward = NULL;

	q = f;

}

//Function for comparing two pointers, used by qsort
int compare(const void* a,const  void* b){
	return (*(int**)a - *(int**)b);
}

void coalesce_free_list(){ 
	memnode p,q;
	int size,count;
	int** ptrs;
	int i;

	//Count the number of nodes
	p = f;
	count = 0;
	while(p!= NULL){
		p = p->forward;
		count = count + 1;
	}

	//Store nodes into an array
	ptrs = malloc(count*sizeof(int*));
	p = f;
	count = 0;
	while(p!= NULL){
		ptrs[count] = (int*)p;
		count = count + 1;
		p = p->forward;
	}

	//Sort nodes
	qsort(ptrs,count,sizeof(int*),compare);


	//Relink nodes
	f = (memnode)ptrs[0];
	p = f;
	p->before = NULL;
	for(i = 1; i < count ; i++){
		p->forward =(memnode)ptrs[i];
		p->forward->before = p;
		p = p->forward;
	}
	p->forward = NULL;

	//Traverse list new list and relink adjacent flist nodes
	p = f;
	while(p != NULL){
		if(((char*)p + p->size) == (char*)p->forward){
			q = p->forward;
			size = p->size + q->size;
			p->amount = size;
			p->forward = q->forward;
		}
		else{ 
			p = p->forward;}
	}
	free(ptrs);
	p = f;



}
