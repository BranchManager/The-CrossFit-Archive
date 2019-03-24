/*NOah Branc */


#include <stdio.h>
//#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "maltest.h"


typedef unsigned long int UI;

char *malloc_begin = NULL;
char *malloc_end = NULL;

typedef struct flist{
	int size;
	struct flist *flink;
	struct flist *blink;
}*Flist;

void *malloc(unsigned int size){
//	printf("size of struct:%d \n",sizeof(struct flist));
	int mul8;
	void *s, *given;

	Flist f,alloc,tmp;
	/*size = size/8;
	  size = size + 1;
	  size = size*8;
	  size = size + 16;
	  if(size < 32)
	  size = 32;*/		
	//mul8 = size%8;
	//mul8 = 8-mul8;
	//size = size + mul8;
	//size = size + 8;
	size = (size + 7 +sizeof(struct flist)&-8);

	printf("The size Created after math is.......... %d \n",size);

	if(malloc_begin == NULL){
		if(size <= 8184){
			s = (void *)sbrk(8192);
			if(s == (void *)-1){
				return NULL;
			}
			printf("Very First Sbrk adress is.......... 0x%x \n",(unsigned int)s);
			malloc_end = s;
			f = (Flist)s;
			f->size = size;

			//printf("Free is 0x%x \n",(unsigned int)f);
			given = (void *)f;


			malloc_begin = (char *)(s+size);

			printf("malloce_begin after first carve is..........0x%x \n",(unsigned int)malloc_begin);
			f = (Flist)malloc_begin;
			f->size = 8192-size;
			f->flink = NULL;
			f->blink = NULL;
			printf("f->size: %d \n",f->size);
		}else{
			s = (void *)sbrk(size);
			if(s == (void *)-1){
				return NULL;
			}
			f->size = size;
			given = (void *)f;
		}
		printf("User is given......... 0x%x \n",given+sizeof(struct flist));
		return given+sizeof(struct flist);
	}else if(malloc_begin != NULL){

		for(tmp = (Flist)malloc_begin; tmp != NULL; tmp = tmp->flink){

			//tmp = (Flist)malloc_begin;
			printf("Malloc begin starts at this adress on malloc call ....... 0x%x \n",(unsigned int)malloc_begin);
			printf("With tmp->size before entry:.......%d\n",tmp->size);
			printf("With size begore entry: ...........%d\n",size);
			if(tmp->size >= size){
				if(tmp->size == size || tmp->size <= size +24){
					/*if(tmp->blink == NULL){
						printf("Barley any size so smp->size = %d\n",tmp->size);
						malloc_begin = (void *)tmp->flink;
						if(tmp->flink != NULL)
							tmp->flink->blink = tmp->blink;
						tmp->flink=NULL;
						printf("SIZE SAME %d \n",tmp->size);
						given = (void *)tmp;
					}else if(tmp->blink != NULL){
						printf("Barley any size so smp->size = %d\n",tmp->size);
						malloc_begin = (void *)tmp->flink;
						tmp->flink = NULL;
						tmp->blink = NULL;
						printf("SIZE SAME %d \n",tmp->size);
						given = (void *)tmp;
					}*/
					if(tmp->blink == NULL){

						//reset head to the next node and updat links
						malloc_begin = (char *)tmp->flink;

						if(tmp->flink != NULL)
							tmp->flink->blink = NULL;
					
					//if node is at the end of flist
					}else if(tmp->flink == NULL){

						//remove link with prev node
						tmp->blink->flink = NULL;

					//if node is in the middle of the list
					}else{

						//reset links to next and prev nodes
						tmp->blink->flink = tmp->flink;
						tmp->flink->blink = tmp->blink;
					}
					given = (void *)tmp;
					printf("IN MALLOC size pointer or f->flink:......... %d \n",sizeof(f->flink));
					printf("MALLOC_begin is now...... 0x%x \n",malloc_begin);
					printf("Start - End malloc difference:........ %d \n",(UI)(malloc_begin - malloc_end));

					printf("User uses......... 0x%x \n",given+sizeof(struct flist));
					printf("OFFICIAL size given to user is %d \n",given - sizeof(struct flist));
					return given+sizeof(struct flist);



				}else{
					mul8 = tmp->size;
					printf("the tmp->size going in is %d\n",tmp->size);
					tmp->size = size;
					s = (void *)tmp+size;
					f = (Flist)s;


					//tmp->size = size;
					malloc_begin = s;
					f->size = mul8 - size;
					printf("mul8 %d - size %d",mul8,size);
					printf("FREE LIST SIZE: %d \n",f->size);
					if(malloc_begin == NULL){
						printf("EXITTING now \n");
						exit(1);

					}
					printf("returning \n");
					f->flink = tmp->flink;
					f->flink = tmp->blink;
					if(f->flink != NULL)
						f->flink->blink = f;
					if(f->blink != NULL)
						f->blink->flink = f;

					tmp->flink = NULL;
					tmp->blink = NULL;
					given = (void *)tmp;

					printf("IN MALLOC size pointer or f->flink:......... %d \n",sizeof(f->flink));
					printf("MALLOC_begin is ...... 0x%x \n",malloc_begin);
					printf("Start - End malloc difference:........ %d \n",(UI)(malloc_begin - malloc_end));

					printf("YOU use......... 0x%x \n",given+sizeof(struct flist));
					printf("OFFICIAL size given to user is %d \n",given - sizeof(struct flist));
					return given+sizeof(struct flist);

				}

				//	:q
				//	return given = (void *)tmp;

			}
			f = tmp;

		}
		if(tmp == NULL){
			
			if(size <= 8184){

				s = (void *)sbrk(8192);
				if(s == (void *)-1){
					return NULL;
				}
				alloc = (Flist)s;
				alloc->size = size;
				given = (void *)alloc;

				/*add remaining mem to flist*/
				if((8192 - size) >= 12){

					s = (char *)(s+size);
					f->flink = (Flist)s;
					f->flink->size = (8192 - size);
					f->flink->flink = NULL;
					f->flink->blink = f;
				}

			}else{

				s = (void *)sbrk(size);
				if(s == (void *)-1){
					return NULL;
				}
				alloc = (Flist)s;
				alloc->size = size;
				given = s;
			}
		}

		printf("The user is getting adress 0x%x \n",given+sizeof(struct flist));
		return given + sizeof(struct flist);
		printf("outa memore nigga call sbrk \n");
	//	printf("the tmp->size going at end is  %d and size is %d\n",tmp->size,size);
		exit(1);
	

	}

}



void free(void *ptr){
	if(ptr == NULL){
	//	printf("returning null free \n");
		return;
	}
	void *ne;
	Flist f,n;
	printf("FREEING adress 0x%x \n",(unsigned int)ptr);
	ne=ptr-sizeof(struct flist);
	f = (Flist)ne;
//	printf("Free new flist size = %d \n",f->size);
	
	f->flink = (Flist)malloc_begin;
	if(malloc_begin == NULL){
		return;
	}
	f->blink = NULL;
	f->flink->blink = f;
	malloc_begin = (void *)f;

	/*int sz;
	Flist n1; //node passed to free()
	Flist n2; 
	Flist n3; //node at end of flist

	n3 = NULL;

	//get the tail of the free list
	for(n2 = (Flist)malloc_begin; n2 != NULL; n2 = n2->flink){
		n3 = n2;
	}
	
	//Back up by 8 bytes and grab node size
	ptr = ptr-8;
	n1 = (Flist)ptr;
	sz = n1->size;
	
	//Add to free list or make new head
	if(n3 != NULL)
		n3->flink = n1;
	else{
		malloc_begin = (char *)n1;
	}

	//links newly freed node to end of flist
	n1->blink = n3;
	n1->flink = NULL;*/

}

void *realloc(void *ptr, unsigned int size){
	void *rptr;
	int min;
	if(ptr == NULL)
		return malloc(size);
	else if(size == 0){
		free(ptr);
	}
		
	rptr = malloc(size);
	min = ptr - sizeof(struct flist);
	if(size < min)
		min = size;
	
	memcpy(rptr,ptr,min);
	free(ptr);

	return ptr;
}

	
	
	/*void* ptr2;
	ptr2 = (void *)malloc(size);
	memcpy(ptr2,ptr,size);
	free(ptr);
	ptr2 = (void *)malloc(size);
	return ptr2;*/

//}

void *calloc(unsigned int nemb,unsigned int size){
	void* ret;
	ret = malloc(nemb*size);
	bzero(ret,nemb*size);
	return ret;


}
