#include <stdio.h>
#include "malloc.h"

int main() {

  char *s;
  int *i;

  /*printf("hi there\n");*/
    s = (char *) malloc(50);

  if (s != NULL) {
    strcpy(s,"This is a big fat ole test!!!");
    printf("%s\t0x%x\n",s,s);
  }
  else
  {
    fprintf(stderr,"Error allocating s!\n");
    exit(1);
  }

    i = (int *) malloc(100*sizeof(int));

  if (i != NULL) {
    printf("i - 0x%x\n",i);
  }
  else
  {
    fprintf(stderr,"Error allocating i!\n");
    exit(1);
  }

    free(s);
    free(i);
}
