//Corey Vereen
//cs 360 lab 5
//



#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <string.h>
#include <time.h>
#include <float.h>

//used for the memory of each node
//
	typedef struct flist
	{
			struct flist* next;
	
			int size;
	
			struct flist* prev;

	}*Flist;

	Flist track = NULL;

		void* FRl()
		{
			return track;
		}

			void* FLN(void* node)
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


void* JMALLOC(size_t sizzle)//the size being malloced
{
	int biz;
	
	void* R;
	
	int count;
	
	void* T;
	
	int sev;

	

	
	count = sizzle;
	//we first check to see how many bytes we need in multiples of eight
	//we will then see if we need to round up after 
	sev = sizzle/8;
	
	
	if(sizzle%8)
	{
		
		sev = sev + 2;
	
	}

	else
	{sev = sev + 1;}

	biz = sev * 8;


	//if the list isnt made yet 
	if(track == NULL)
	{
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
	else
	{
		T = (void*)sbrk(biz);
			
		*(int*)T = biz;
			
		T = (double*)T + 1;
			
		R = T;
		
	}
	//above it gets as much memory as needed
}
	
else
{
	
		
	Flist mem;
	
	Flist memo;
	
	memo = track;
		
	int osizzle;
	

	int trav;
	trav = 0;


	//linking and relinking the nodes
	//
	while(memo != NULL)
	{
	
		if(memo->size >= biz)
	{
	
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

	
	else if(memo->size == biz + 8)
	{//giving an extra 8 bytes out
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

	//relinking the list if neccessary
		else
		{

			osizzle = memo->size;
					
			memo->size = biz;
					
			R = (double*)memo + 1;
					
			trav = 1;
					
			T = (char*)memo + biz;
					
			mem = (Flist)T;
					
			
					
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
					
					
			else if(memo->next == NULL)
			{
						
			memo->prev->next = mem;

			mem->next = memo->next;
						
			mem->prev = memo->prev;
						
			mem->size = osizzle - biz;
			    
			
			}
			
			
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
	
	if(trav == 0)
	{
	  
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

	Flist memr;
			
	int sizzle;

	Flist memo;
			
	Flist mem;

	memr = NULL;

	mem = track;
	
	while(mem != NULL)
	{
		
		memr = mem;
		
		mem = mem->next;
	
	}

	ptr = (double*)ptr - 1 ;
	
	memo = (Flist)ptr;
	
	sizzle = memo->size;
	if(memr != NULL)
	{
		
		memr->next = memo;
	
	}
	
	else
	{
		
		track = memo;
	
	}
	
	memo->prev = memr;

	
	memo->next = NULL;

	mem = track;

}

int EVAL(const void* m,const  void* x)
{
	return (*(int**)m - *(int**)x);
}

void EFL()
{ 
	int** ptrs;
	
	Flist memo;
	
	int sizzle,i;

	Flist mem;
	
	int count;

	memo = track;
	
	count = 0;
	
	while(memo!= NULL)
	{
		memo = memo->next;
		
		count = count + 1;
	}

	ptrs = malloc(count*sizeof(int*));
	
	memo = track;
	
	count = 0;
	
	while(memo!= NULL)
	{
		ptrs[count] = (int*)memo;
		
		count = count + 1;
		
		memo = memo->next;
	}

	qsort(ptrs,count,sizeof(int*),EVAL);


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
