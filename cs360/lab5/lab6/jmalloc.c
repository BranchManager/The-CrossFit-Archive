#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <string.h>
#include <time.h>
#include <float.h>

//Struct to store free memory

	typedef struct flist
	{
			//use in each node
			struct flist* next;
	
			int size;
	
			struct flist* prev;

	}*Flist;//flist

//Global var to track list
	Flist track = NULL;

//Get start of flist
		void* free_list_begin()
		{
			return track;
		}

//Check next flist node
			void* free_list_next(void* node)
			{
				Flist R;

				R = (Flist)node;
				
				if(R != NULL)
				{
		
					R = R->next;}
				else
				{
		
					R = NULL;
				}

				return (void*)R;
			}


void* JMALLOC(size_t sizzle)//the sizzle being malloced
{
	int biz;//byte
	
	void* R;//R
	
	int count;//count
	
	void* T;//T 
	
	int sev;//eight chunks

	

	//Check how many biz to allocate
	count = sizzle;
	
	sev = sizzle/8;
	
	if(sizzle%8)
	{
		
		sev = sev + 2;
	
	}

	else
	{sev = sev + 1;}

	biz = sev * 8;
	
	//If no flist allocated
	if(track == NULL)
	{
		//If there will be buffer smemoace, give user memory, then add additional space to flist
		if(sizzle <= 8176)
		{
			T = (void*)sbrk(8192);
			
			*(int*)T = biz;
			
			T = (double*)T + 1;
			
			R = T;
			
			T = (double*)T + (sev - 1);
			
			if(8192 - biz >= 12)
			{
			
			track = (Flist)T;
					
			track->size = 8192 - biz;
					
			track->next = NULL;
					
			track->prev = NULL;
			
			}

		}
		//Otherwise get as much memory needed, no leftover
	else
	{
		T = (void*)sbrk(biz);
			
		*(int*)T = biz;
			
		T = (double*)T + 1;
			
		R = T;
		
	}
}
	
else
{
	
		
	Flist mem;//mem q
	
	Flist memo;//memo p
	
	memo = track;
		
	int osizzle;
	

	int trav;
		//Traverse flist
	trav = 0;
	
	while(memo != NULL)
	{
			//If node has enough memory
	if(memo->size >= biz)
	{
				//If node gets deleted afterwards, relink
	if(memo->size == biz)
	{
					
	memo->size = biz;
					
	if(memo->prev == NULL)
	{
		track = memo->next;
		
	  if(memo->next != NULL)
	  {
		
		  memo->next->prev = NULL;
	  }
	}
					
	else if(memo->next == NULL)
	{
						
		memo->prev->next = NULL;
	
	}
	
	else
	{
		
		memo->prev->next = memo->next;
						
		memo->next->prev = memo->prev;
	
	}
			R = (int*)memo + 2;
					
			trav = 1;
					
			break;
	}			
				//If node gets deleted afterwards, relink, give extra 8biz to user										
	else if(memo->size == biz + 8)
	{
		memo->size = biz + 8;
		
      if(memo->prev == NULL)
	  {
		track = memo->next;
			
	    if(memo->next != NULL)
		{
				
		  memo->next->prev = NULL;
		
		}
	  
	  }
				
	  else if(memo->next == NULL)
	  {
		
		  memo->prev->next = NULL;
	  
	  }
		else
		{
			memo->prev->next = memo->next;
				
			memo->next->prev = memo->prev;}
				
			R = (int*)memo + 2;
				
		     trav = 1;
				
			break;
		
		}
			//If node must be carved umemo, carve it up relink list
		else
		{

			osizzle = memo->size;
					
			memo->size = biz;
					
			R = (double*)memo + 1;
					
			trav = 1;
					
			T = (char*)memo + biz;
					
			mem = (Flist)T;
					
			
			//If head
					
			if(memo->prev == NULL)
			{
						
			track = mem;
						
			if(memo->next != NULL)
			{
							
			memo->next->prev = mem;}

			mem->next = memo->next;
						
			mem->prev = memo->prev;
						
			mem->size =osizzle - biz;																					
			}
					
			//If tail
					
			else if(memo->next == NULL)
			{
						
			memo->prev->next = mem;

			mem->next = memo->next;
						
			mem->prev = memo->prev;
						
			mem->size = osizzle - biz;
			    }
			//If middle
			else
			{
						
				memo->prev->next = mem;
						
				memo->next->prev = mem;

						
				mem->next = memo->next;
						
				mem->prev = memo->prev;
						
				mem->size = osizzle - biz;
			
			}
			
			break;
				
		
		}
			
	
	}
			
		mem = memo;
			
		memo = memo->next;
		
	}
		//If not enough free smemoace
	
	if(trav == 0)
	{
			//Get more buffered smemoace, add leftover to flist
	  if(sizzle <= 8176)
	  {
		
		T = (void*)sbrk(8192);
				
		*(int*)T = biz;
				
		T = (double*)T + 1;
				
		R = T;
				
		T = (double*)T + (sev - 1);
				
		if(8192 - biz >= 12)
		{
					
			mem->next = (Flist)T;
					
			mem->next->size = 8192 - biz;
					
			mem->next->next = NULL;
					
			mem->next->prev = mem;
				
		}
	}
			//Otherwise get enough memory, no extra to add to flist
			
	  else
	  {
				
		  T = (void*)sbrk(biz);
				
		  *(int*)T = biz;
				
		  T = (double*)T + 1;
				
		  R = T;
	  }
		
	}

	
}
	return R;		

}

void FREE(void* ptr)
{

	Flist memr;//r
			
	int sizzle;

	Flist memo;//memo
			
	Flist mem;//q

	memr = NULL;

	//Get to end of flist
	mem = track;
	
	while(mem != NULL)
	{
		
		memr = mem;
		
		mem = mem->next;
	
	}

	//Get sizzle of new flist node
	ptr = (double*)ptr - 1 ;
	
	memo = (Flist)ptr;
	
	sizzle = memo->size;

	//Add the new node to the flist
	if(memr != NULL)
	{
		
		memr->next = memo;
	
	}
	
	else
	{
		
		track = memo;
	
	}
	
	memo->prev = memr;

	//Set the node
	
	memo->next = NULL;

	mem = track;

}

//Function for commemoaring two pointers, used by qsort
int EVAL(const void* a,const  void* b)
{
	return (*(int**)a - *(int**)b);
}

void coalesce_free_list()
{ 
	int** ptrs;
	
	Flist memo;//p
	
	int sizzle,i;//size i

	Flist mem;//q
	
	int count;

	//Count the number of nodes
	memo = track;
	
	count = 0;
	
	while(memo!= NULL)
	{
		memo = memo->next;
		
		count = count + 1;
	}

	//Store nodes into an array
	ptrs = malloc(count*sizeof(int*));
	
	memo = track;
	
	count = 0;
	
	while(memo!= NULL)
	{
		ptrs[count] = (int*)memo;
		
		count = count + 1;
		
		memo = memo->next;
	}

	//Sort nodes
	qsort(ptrs,count,sizeof(int*),EVAL);


	//Relink nodes
	track = (Flist)ptrs[0];
	
	memo = track;
	
	memo->prev = NULL;
	
	for(i = 1; i < count ; i++)
	{
		memo->next =(Flist)ptrs[i];
		
		memo->next->prev = memo;
		
		memo = memo->next;
	}
	
	memo->next = NULL;

	//Traverse list new list and relink adjacent flist nodes
	memo = track;
	
	while(memo != NULL)
	{
		
	if(((char*)memo + memo->size) == (char*)memo->next)
	{
	 
	 mem = memo->next;
	 
	 sizzle = memo->size + mem->size;
	 
	 memo->size = sizzle;
	 
	 memo->next = mem->next;
		
	}
	 
	else
	{ 
			
		memo = memo->next;
	
	
	
	}
	
	free(ptrs);
	
	memo = track;


}



}
