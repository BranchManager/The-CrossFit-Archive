#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "jval.h"
#include "jrb.h"
#include "fields.h"

struct Person
{
	char Name;
	char Sex;
	char Father;
	char Mother;
	//char*children[];
	// something for the tree traversal
	//
	//
};

int main(int argc, char **argv)
{

	if(argc!=2)
	{
		printf("There are not enough arguments on the line");
		exit(1);
	}

	IS is;

	is = new_inputstruct(argv[1]);
	if (is == NULL) {
		perror(argv[1]);
		exit(1);
	}

	while(get_line(is) >= 0) {
		for (int i = 0; i < is->NF; i++) {
			printf("%d: %s\n", is->line, is->fields[i]);
		}
	}

	jettison_inputstruct(is);
	exit(0);
}





}












