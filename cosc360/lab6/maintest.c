#include "maltest.h"
//#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>


void test1(){
	char *f;
	f = strdup("implementing test1");
	free(f);

	printf("\n\n");
}

void test2(){

	int* p = malloc(sizeof(int));
	printf("\n");
	*p = 5;
	printf("address: %p, value: %d\n",p, *p);
	free(p);

	printf("\n\n");
}

void test3(){
	int i;
	for(i = 0; i < 5; i++){
		int* p = malloc(sizeof(int));
		printf("\n");
		*p = i;
		printf("address: %p, value: %d\n",p, *p);
		free(p);
	}
	printf("\n\n");
}

void test4(){
	int i;
	char *p = malloc(5 * sizeof(int));
	printf("\n");
	for(i = 0; i < 5; i++){
		p[i] = i;

		printf("address: %p, value: %d\n", p + i, p[i]);
//		printf("FEE seg?\n");
		//free(p[i]);

	}
	
	realloc(p,33);
	for(i = 0; i < 5; i++){
		printf("address: %p, value: %d\n", p + i, p[i]);

	}
	
	free(p);
	printf("\n\n");
}
void test5(){
	int i;
	char *p = calloc(5, sizeof(int));
	printf("\n");
	for(i = 0; i < 5; i++){
		p[i] = i;

		printf("address: %p, value: %d\n", p + i, p[i]);

	}
	
	
	realloc(p,5);
	for(i = 0; i < 5; i++){
		printf("address: %p, value: %d\n", p + i, p[i]);

	}
	
	free(p);
	printf("\n\n");
}

void test6(){
	void* p = malloc(sizeof(int));
	printf("\n");
	*((int*)p) = 5;
	printf("integer: address: %p, value: %d\n", p, *((int*)p));
	free(p);
	char* c = "Hello World"; 
	p = malloc(sizeof(char) * (strlen(c) + 1));
	printf("\n");
	memcpy(p, c, strlen(c));
	printf("String: address: %p, value: %s\n", p, (char*)p);
	free(p);
	p = malloc(sizeof(float));
	printf("\n");
	*((float*)p) = 1.2345;
	printf("float: address: %p, value: %f\n", p, *((float*)p));
	free(p);
	printf("\n\n");


}


void test7(){

	void* p;    
	int i;
	for(i = 1; (p = malloc(i)) != NULL; i++){
		printf("user wants %d bytes allocated\n", i);
		printf("we allocate %d for user but gave him %i \n",(void*)p-24,i); 
		free(p);
	}
	printf("\n\n");


}


void test8(){
	void* p;    
	int i;
	for(i = 1; (p = malloc(i)) != NULL; i++){
		printf("%d bytes allocated\n", i);
		free(p);
	}
	printf("\n\n");
}

int main(int argc,char **argv){
	int i;
	i = atoi(argv[1]);
		printf("Running test %d \n\n",i);


	switch(i){

		case 1:
			test1();

			break;
		case 2:
			test2();

			break;
		case 3:
			test3();

			break;

		case 4:
			test4();

			break;
		case 5:
			test5();

			break;
		case 6:
			test6();

			break;
		case 7:
			test7();

			break;

		case 8:
			test8();

			break;





	}

}
