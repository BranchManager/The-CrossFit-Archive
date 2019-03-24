#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "jval.h" 
#include "jrb.h"
#include "fields.h" 
#include "dlist.h"

typedef struct ip {
	  unsigned char address[4];
		Dllist names;
} ip;



int main(int argc, char **argv)
{
	int i;
	i=0;
	FILE *fp;
	ip node;
	JRB tree;
	long lSize;
	char * buffer;
	size_t result;

	//need to read in the stuff from the file
	fp=fopen("converted","rb");//open file

	if (fp==NULL) {fputs ("File error",stderr); return;}
	
	//find out the file size
	fseek (fp , 0 , SEEK_END);
	lSize = ftell (fp);
	rewind (fp);

	//allocate memory for the bytes
	buffer= (char*)malloc(sizeof(char)*lSize);

	if (buffer == NULL) {fputs ("Memory error",stderr); return;}

	  // put a copy of the file into the buffer:
	    result = fread (buffer,1,lSize,pFile);
	       if (result != lSize) {fputs ("Reading error",stderr); return;}
	  //
	  //       /* the whole file is now loaded in the memory buffer. */
	   fclose (fp);

	while(i<lSize)
	{
		fread(node->address, 1, 4, fp)//reading in 4 bytes into the nodes address
		//size_t bytes_read;	
		//char buf[100];

		for(int j=0;j<4;j++)
		{
			
			
		}

	}




}
