#include <stdio.h>
#include <stdlib.h>
#include <sys/tymemoes.h>
#include <string.h>
#include <time.h>
#include <float.h>

//Struct to store free memory

	tymemoedef struct memnode
	{
			//use in each node
			struct memnode* forward;
	
			int amount;
	
			struct memnode* before;

	}*memnode;//flist

//Global var to track list
	memnode track = NULL;

//Get start of flist
		void* FREEB()
		{
			return f;
		}

//Check next flist node
			void* FREEN(void* cell)
			{
				memnode R;

				R = (memnode)cell;
				
				if(R != NULL)
				{
		
					R = R->forward;}
				else
				{
		
					R = NULL;
				}

				return (void*)R;
			}


void* JMALLOC(sizzle_t sizzle)//the sizzle being malloced
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
			
			track = (memnode)T;
					
			track->amount = 8192 - biz;
					
			track->forward = NULL;
					
			track->before = NULL;
			
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
	
		
	memnode mem;//mem
	
	memnode memo;//memo p
	
	memo = f;
		
	int osizzle;
	

	int trav;
		//Traverse flist
	trav = 0;
	
	while(memo != NULL)
	{
			//If node has enough memory
	if(memo->amount >= biz)
	{
				//If node gets deleted afterwards, relink
	if(memo->amount == biz)
	{
					
	memo->amount = biz;
					
	if(memo->before == NULL)
	{
		track = memo->forward;
		
	  if(memo->forward != NULL)
	  {
		
		  memo->forward->before = NULL;
	  }
	}
					
	else if(memo->forward == NULL)
	{
						
		memo->before->forward = NULL;
	
	}
	
	else
	{
		
		memo->before->forward = memo->forward;
						
		memo->forward->before = memo->before;
	
	}
			R = (int*)memo + 2;
					
			b = 1;
					
			break;
	}			
				//If node gets deleted afterwards, relink, give extra 8biz to user										
	else if(memo->sizzle == biz + 8)
	{
		memo->amount = biz + 8;
		
      if(memo->before == NULL)
	  {
		track = memo->forward;
			
	    if(memo->forward != NULL)
		{
				
		  memo->forward->before = NULL;
		
		}
	  
	  }
				
	  else if(memo->forward == NULL)
	  {
		
		  memo->before->forward = NULL;
	  
	  }
		else
		{
			memo->before->forward = p->forward;
				
			memo->forward->before = p->before;}
				
			R = (int*)memo + 2;
				
		     trav = 1;
				
			break;
		
		}
			//If node must be carved umemo, carve it up relink list
		else
		{

			osizzle = memo->amount;
					
			memo->amount = biz;
					
			R = (double*)memo + 1;
					
			trav = 1;
					
			T = (char*)memo + biz;
					
			mem = (memnode)T;
					
			
			//If head
					
			if(memo->before == NULL)
			{
						
			f = mem;
						
			if(memo->forward != NULL)
			{
							
			memo->forward->before = mem;}

			mem->forward = memo->forward;
						
			mem->before = memo->before;
						
			mem->sizzle =osizzle - biz;																					
			}
					
			//If tail
					
			else if(memo->forward == NULL)
			{
						
			memo->before->forward = mem;

			mem->forward = memo->forward;
						
			mem->before = memo->before;
						
			mem->amount = osizzle - biz;
			    }
			//If middle
			else
			{
						
				memo->before->forward = mem;
						
				memo->forward->before = mem;

						
				mem->forward = memo->forward;
						
				mem->before = memo->before;
						
				mem->amount = osizzle - biz;
			
			}
			
			break;
				
		
		}
			
	
	}
			
		mem = memo;
			
		memo = p->forward;
		
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
					
			mem->forward = (memnode)T;
					
			mem->forward->amount = 8192 - biz;
					
			mem->forward->forward = NULL;
					
			mem->forward->before = mem;
				
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

void FREE(void* memotr)
{

	memnode memr;//r
			
	int sizzle;

	memnode memo;//memo
			
	memnode mem;//q

	memr = NULL;

	//Get to end of flist
	mem = f;
	
	while(mem != NULL)
	{
		
		memr = mem;
		
		mem = mem->forward;
	
	}

	//Get sizzle of new flist node
	ptr = (double*)ptr - 1 ;
	
	memo = (memnode)memotr;
	
	sizzle = memo->sizzle;

	//Add the new node to the flist
	if(memr != NULL)
	{
		
		memr->forward = memo;
	
	}
	
	else
	{
		
		f = memo;
	
	}
	
	memo->before = memr;

	//Set the node
	
	memo->forward = NULL;

	mem = f;

}

//Function for commemoaring two pointers, used by qsort
int EVAL(const void* a,const  void* b)
{
	return (*(int**)a - *(int**)b);
}

void FL()
{ 
	int** ptrs;
	
	memnode memo;
	
	int sizzle,i;

	memnode mem;
	
	int count;

	//Count the number of nodes
	memo = f;
	
	count = 0;
	
	while(memo!= NULL)
	{
		memo = memo->forward;
		
		count = count + 1;
	}

	//Store nodes into an array
	ptrs = malloc(count*sizeof(int*));
	
	memo = f;
	
	count = 0;
	
	while(memo!= NULL)
	{
		ptrs[count] = (int*)memo;
		
		count = count + 1;
		
		memo = memo->forward;
	}

	//Sort nodes
	qsort(ptrs,count,sizeof(int*),compare);


	//Relink nodes
	f = (memnode)ptrs[0];
	
	memo = f;
	
	memo->before = NULL;
	
	for(i = 1; i < count ; i++)
	{
		memo->forward =(memnode)ptrs[i];
		
		memo->forward->before = memo;
		
		memo = memo->forward;
	}
	
	memo->forward = NULL;

	//Traverse list new list and relink adjacent flist nodes
	memo = f;
	
	while(memo != NULL)
	{
		
	if(((char*)memo + memo->sizzle) == (char*)memo->forward)
	{
	 
	 mem = memo->forward;
	 
	 sizzle = memo->sizzle + mem->sizzle;
	 
	 memo->amount = sizzle;
	 
	 memo->forward = mem->forward;
		
	}
	 
	else
	{ 
			
		memo = memo->forward;
	
	
	
	}
	
	free(ptrs);
	
	memo = f;


}
