#include <stdio.h>
#include <string.h>
#include "malloc.h"

main()
{
  int *i;
  int j=1;
  char buf[15];

  printf("Starting kgobble\n");

  while(1)
  {
    i=(int *)malloc(8176 * j);
    if (i==0)
    {
      write(1,"Memory exhaustion complete\n",27);
      exit(0);
    }
    sprintf(buf,"%x\n",i);
    write(1,buf,strlen(buf));
    bzero(buf,15);
    j++;
  }
}
