#include <stdio.h>
#include "malloc.h"

/******************************************************************

 testing the free list


 this prg exhausts memory and counts how many blocks it was able 
 to get. it then frees the blocks back and tries to remalloc the
 same number of blocks. It also prints out the range of addresses
 for each try. If you have things working right then you will
 get the same number of mallocs each time and addresses should match


******************************************************************/


main()
{
	int *i_array[500000];
	int i=0,l=0,k=0;
	char string1[100];
	char string2[100];
	
while (1)
  {
  i_array[i]=(int *)malloc(6500000);
  if (i_array[i]==0) break;
/*  sprintf(string1,"i is: %d - 0x%x\n", i, i_array[i]);
  write(1,string1,strlen(string1));*/
  i++;
  }

sprintf(string1,"First try: %d Min 0x%x Max 0x%x\n",i--,
	i_array[0],i_array[i]);

write(1,string1,strlen(string1));

for (l=(i);l>=0;l--) free(i_array[l]);


for (l=0;l<=i;l++)
  {
    i_array[l]=(int *)malloc(6500000);
    if (i_array[l]==0) break;
  }

sprintf(string2,"Second try: %d Min 0x%x Max 0x%x\n",l,
        i_array[0],i_array[l-1]);
write(1,string2,strlen(string2));

}
