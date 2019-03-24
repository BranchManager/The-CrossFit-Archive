/*Noah Branch
 * lab1 Family Tree
 * This program reads in family information of 
 * a specific format, and spits it back out in a 
 * different format displayn\ing the children
 * 
 * some comments are notes incase you are confused
 */

//noha
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dllist.h"
#include "fields.h"
#include "jrb.h"

//This is the person struct whcih holds all the person information
typedef struct GuysAndGals{
	char *Name;
	char *Sex;
	struct GuysAndGals *Father;
	struct GuysAndGals *Mother;
	int visited;
	int printed;
	Dllist child;

}GuysAndGals;


//This function creates a person if they have not been added
struct GuysAndGals* makePerson(char *namap,JRB p){
	GuysAndGals *gg;
	gg = (GuysAndGals *)malloc(sizeof(GuysAndGals));
	gg->Name = strdup(namap);
	gg->child = new_dllist();
	gg->visited = 0;
	gg->printed = 0;

	jrb_insert_str(p,gg->Name,new_jval_v(gg));

	return gg;

}

//This function prints the information in each struct
void print_it(GuysAndGals *go, Dllist toprint){

	GuysAndGals *got;
	Dllist doprint;
	go->printed = 1;
	printf(go->Name);printf("\n");
	if(go->Sex != NULL){
		printf("  Sex: %s \n",go->Sex);
	}else{
		printf("  Sex: Unknown \n");
	}
	if(go->Father != NULL){
		printf("  Father: %s \n",go->Father->Name);
	}else{ 
		printf("  Father: Unknown \n");
	}
	if(go->Mother != NULL){
		printf("  Mother: %s \n",go->Mother->Name);
	}else{ 
		printf("  Mother: Unknown \n");
	}

	if(dll_empty(go->child)){
		printf("  Children: None \n");
	}else{

		printf("  Children: \n");

		dll_traverse(doprint,go->child){
			got = (GuysAndGals *)doprint->val.v;
			printf("    %s \n",got->Name);
			dll_append(toprint,new_jval_v(got));
		}	
		free_dllist(go->child);
	}
	printf("\n");

}
//The fucntion is used to check for cycles using recursion
int check(GuysAndGals *p){
	if(p->visited == 1) return 0;
	if(p->visited == 2) return 1;

	Dllist tmp;
	GuysAndGals *gt;
	p->visited = 2;
	dll_traverse(tmp,p->child){
		gt = (GuysAndGals*)tmp->val.v;
		if(check(gt)){
			return 1;
		}
	}
	p->visited = 1;
	return 0;

}

//Main function that does all of the main work
int main(int argc, int **argv){

	IS is; 
	int i,counter;
	//char pers[6]; strcpy(pers,"PERSON");
	//char father_of[9];strcpy(father_of,"FATHER_OF");
	char namap[1000],namaD[1000];
	JRB p,node;
	GuysAndGals *gg, *gl, *gy;	
	p = make_jrb();
	Dllist dnode,cnode;
	is = new_inputstruct(NULL);
	counter = 0;


	while(get_line(is) >= 0){

		//The counter is used to keep track of line numbers
		counter++;
		if(!(strlen(is->text1)==1)){

			//If we read in a person we make sure its not already in the tree
			//if it isnt we set the main person (GuysandGals) node
			//we create the main person node
			if(strcmp(is->fields[0],"PERSON") == 0){

				//we use the namap array for the name
				memset(namap,0,1000);
				for(i = 1; i < is->NF;i++){
					strcat(namap,is->fields[i]);
					strcat(namap," ");
				}
				//This function resetes the string (name of string, what its being set to, number of bytes to set)	
				//memset(namap,'\0',100);


				node = jrb_find_str(p,namap);
				if(node == NULL){
					gg = makePerson(namap,p);

				}else{
					gg = (GuysAndGals *)node->val.v;

				}
			}
			//If we read sex we set the sex accordingly 
			//and make sure we arent contradicting what is already set
			if(strcmp(is->fields[0],"SEX")==0){
				if(gg->Sex != NULL){
					if((strcmp(gg->Sex,"Male")==0) && (strcmp(is->fields[1],"F")==0)){
						fprintf(stderr,"Bad input - sex mismatch on line %d\n",counter);
						//fprintf(stderr,"ERROR: %scannot be both a mother and a male \n",gg->Name);
						exit(1);

					}else if((strcmp(gg->Sex,"Female")==0) && (strcmp(is->fields[1],"M")==0)){

						fprintf(stderr,"Bad input - sex mismatch on line %d\n",counter);
						exit(1);
					}
				}


				else if(strcmp(is->fields[1],"M")==0){

					gg->Sex = strdup("Male");
				}else if(strcmp(is->fields[1],"F")==0){

					gg->Sex = strdup("Female");
				}

		
			//If we read FARTHER_OF or MOTHER_OF we set the respective mothers 
			//and set the sex of the person correctly
			//WE do the same for FATHER and MOTHER at the end
			}if((strcmp(is->fields[0],"FATHER_OF")==0) || (strcmp(is->fields[0],"MOTHER_OF")==0)){
				memset(namaD,0,1000);

				for(i = 1;i < is->NF;i++){

					strcat(namaD,is->fields[i]);
					strcat(namaD," ");

					//					printf("		In For loop namaD is            :   %s \n",namaD);
				}
				//make sure node is not in tree if it is we find and set gl struct
				node = jrb_find_str(p,namaD);
				if(node == NULL){
					gl = makePerson(namaD,p);


				}else{
					gl = (GuysAndGals *)node ->val.v;

				}

				//Set mother  and father and sex while doing error checking and
				//making sure sexes do not contradict
				if(strcmp (is->fields[0],"MOTHER_OF")==0){
					if(gg->Sex == NULL){
						gg->Sex = strdup("Female");
					}else if(strcmp(gg->Sex,"Male")==0){
						fprintf(stderr,"Bad input - sex mismatch on line %d\n",counter);	
						exit(1);
					}

					if(gl->Mother == NULL){
						dll_append(gg->child,new_jval_v(gl));
						gl->Mother = gg;

					}else if(gl->Mother->Name != gg->Name){
						printf("%s  %s",gl->Mother->Name,gg->Name);
						fprintf(stderr,"Bad input -- child with two mothers on line %d\n",counter);	
						exit(1);
					}
				}else if((strcmp (is->fields[0],"FATHER_OF")==0)){
					if(gg->Sex == NULL){
						gg->Sex = strdup("Male");
					}else if(strcmp(gg->Sex,"Female")==0){
						fprintf(stderr,"ERROR: %scannot be both a father and a female \n",gg->Name);
						exit(1);
					}


					if(gl->Father == NULL){
						dll_append(gg->child,new_jval_v(gl));
						gl->Father = gg;

						//	printf("		WE are appending child %s to parent %s \n",gl->Name,gg->Name);
					}else if(gl->Father->Name != gg->Name){

						fprintf(stderr,"Bad input -- child with two fathers on line %d\n",counter);	
						exit(1);
					}
				}


			//this if statment is done almost exactly like the previous one so I wont comment
			//like I did above it would be redundant
			//the only difference is the how the mothers and fathers are set 
			//due to how the they are read in
			}if((strcmp(is->fields[0],"FATHER")==0) || (strcmp(is->fields[0],"MOTHER")==0)){

				memset(namaD,0,1000);
				for(i = 1;i < is->NF;i++){
					strcat(namaD,is->fields[i]);
					strcat(namaD," ");
				}

				node = jrb_find_str(p,namaD);

				if(node == NULL){
					gl = makePerson(namaD,p);

				}else{
					gl = (GuysAndGals *)node ->val.v;
				}if(strcmp (is->fields[0],"MOTHER")==0){
					if(gl->Sex == NULL){
						gl->Sex = strdup("Female");

					}else if(strcmp(gl->Sex,"Male")==0){
						//fprintf(stderr,"ERROR:%s cannot be both a mother and a male \n",gl->Name);
						fprintf(stderr,"Bad input - sex mismatch on line %d\n",counter);
						exit(1);
					}

					if(gg->Mother == NULL){
						dll_append(gl->child,new_jval_v(gg));
						gg->Mother = gl;

					}else if(gg->Mother->Name != gl->Name){
						//			printf("%s  %s",gg->Mother->Name,gl->Name);

						fprintf(stderr,"Bad input -- child with two mothers on line %d\n",counter);	
						exit(1);
					}


				}else if((strcmp (is->fields[0],"FATHER")==0)){
					if(gl->Sex == NULL){
						gl->Sex = strdup("Male");
					}else if(strcmp(gl->Sex,"Female")==0){
						fprintf(stderr,"ERROR:%s cannot be both a mother and a male \n");
						exit(1);
					}
					if(gg->Father == NULL){
						dll_append(gl->child,new_jval_v(gg));
						gg->Father = gl;
						//printf("		WE are appending child %s to parent %s \n",gg->Name,gl->Name);
					}else if(gg->Father->Name != gl->Name){

						fprintf(stderr,"Bad input -- child with two fathers on line %d\n",counter);	
						exit(1);
					}


				}


			}
		}
	}	

	//the check for cycles
	jrb_traverse(node,p){
		gy = (GuysAndGals *)node->val.v;
		if(check(gy)){
			fprintf(stderr,"Bad input -- cycle in specification\n");
			exit(1);
		}

	}


	Dllist toprint,newtree,newt,doprint;
	toprint = new_dllist();
	newt = new_dllist();
	doprint = new_dllist();
	newtree = new_dllist();
	GuysAndGals *go,*got;
	int both;

	jrb_traverse(node,p){
		go = (GuysAndGals*)node->val.v;
		if(go->Mother == NULL && go->Father == NULL){
			dll_append(toprint,new_jval_v(go));
		}

	}
	while(!dll_empty(toprint)){
		go = (GuysAndGals *)toprint->flink->val.v;

		newt = toprint->flink;
		dll_delete_node(toprint);
		toprint = newt;

		if(go->printed == 0){
			if(go->Father == NULL && go->Mother == NULL){
				print_it(go,toprint);
			}else if((go->Father != NULL && go->Mother != NULL) && 
					(go->Father->printed ==1 &&
					 go->Mother->printed == 1)){
				print_it(go,toprint);
			}else if((go->Father != NULL && go->Father->printed == 1) && (go->Mother == NULL)){
				print_it(go,toprint);
			}else if((go->Mother != NULL && go->Mother->printed == 1) && (go->Father == NULL)){
				print_it(go,toprint);

			}

		}

	}




	/*NEXT TIME ON NOAH'S CODING ADVENTURES*/

	/*Chater 1 8/31/18
	 * Alright the problem seem to be the names are being added twice ones when it seems farther of and again when it 
	 * just sees father and as a result it jus tleaves a blank space
	 *so im righting a function to check the dllist and if its in there well.....idk yet i need to see whats the best option for how my 
	 code is written.
	 *
	 * Ch2 8/31/18
	 * I im still tryin to figure out why im getting empty children in Dlist. I think its cause I am inserting the same name twoce at points for mother_of and mother
	 * So I wrote a function to detect if its already been inserted so it doesnt insert again
	 * it may need to be inserted some where around line 223 see comments
	 *
	 * Ch3 9/2/18
	 *No Real progress. Ive formatted my error output a little better so that it is easier to see whats going on
	 *it has allowed me to see a trend after the last farther or mother under rvery person
	 *it seem to hold on to that null character. im almost fully convinced it has to do with how im reading in the information
	 *Ch4 9/5/2018
	 *The 5 test cases seem to be working now. so I just have ot run grade scripts to
	 test thath and then clean up code
	 *


*/





	//	}
//	jrb_free_tree(node);
//	free(p);
	jrb_free_tree(p);
	jettison_inputstruct(is);
	return 0;
}
//in the middle of checking
//not really understanding whatvariables go where
