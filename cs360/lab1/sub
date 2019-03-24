#include <string.h>
#include <stdio.h>
#include <jval.h>
#include <dllist.h>
#include <jrb.h>
#include <fields.h>


typedef struct PERS{

	int pout;
	Dllist Children;
	char* Name;//
	char* Sex;
	struct PERS* mother;
	int visited;                                                
	struct PERS* father;
} PERS;


/*
 *  * gets the Name of the person no matter how many Names they have.
 *   * allocates the memory for it.
 *    * if the Name isnt a person then it makes the Name.
 *     * if it is a person it returns the PERS
 *      */
struct PERS* makepers(IS input, JRB njrb)
{

	char* Name;

	JRB tmp;

	int i, inputlen;

	PERS *p;

	inputlen = strlen(input->fields[1]);

	for (i = 2; i < input->NF; i++)
	{ 
		inputlen += (strlen(input->fields[i])+1);
	}

	Name = (char *) malloc(sizeof(char)*(inputlen+1));

	strcpy(Name, input->fields[1]);
	inputlen = strlen(input->fields[1]);


	for (i = 2; i < input->NF; i++) 
	{
		Name[inputlen] = ' ';

		strcpy(Name+inputlen+1, input->fields[i]);
		inputlen += strlen(Name+inputlen);
	}

	if(jrb_find_str(njrb,Name)==NULL)
	{
		p=malloc(sizeof(PERS));

		p->Name= strdup(Name);
		p->Children = new_dllist();
		p->pout=0;

		jrb_insert_str(njrb, p->Name, new_jval_v((void *) p));
	}
	else
	{
		tmp = jrb_find_str(njrb,Name);

		p = (PERS *) tmp->val.v;               
	}
	return p;
}


int ifVisited(PERS * desc)
{
	Dllist tmp;

	if (desc->visited == 1) 
	{
		return 0;
	}

	if (desc->visited == 2) 
	{
		return 1;
	}

	desc->visited = 2;

	dll_traverse(tmp, desc->Children)
	{
		if (ifVisited(tmp->val.v)) return 1;
	}

	desc->visited = 1;

	return 0;
}

/* prints out the PERS information with the parents first, followed by
 *  * the children
 *   */

void print(PERS * PP)
{

	Dllist temp;

	if(PP->pout==1)
	{
		return;
	}

	if(PP->father != NULL && PP->father->pout!=1)
	{
		print(PP->father);
	}

	if(PP->mother != NULL && PP->mother->pout!=1)
	{
		print(PP->mother);
	}

	printf("%s \n",PP->Name);

	if(PP->Sex)
	{
		printf("  Sex: %s\n",PP->Sex);
	}
	else
	{
		printf("  Sex: %s\n","Unknown");
	}

	if(PP->father)
	{
		printf("  Father: %s \n",PP->father->Name);
	}
	else
	{
		printf("  Father: %s \n","Unknown");
	}

	if(PP->mother)
	{
		printf("  Mother: %s\n",PP->mother->Name);
	}
	else
	{
		printf("  Mother: %s \n","Unknown");
	}

	printf("  Children: ");

	if(dll_empty(PP->Children))
	{
		printf("%s\n","None");
	}
	else
	{
		printf("\n");
	}

	dll_traverse(temp, PP->Children) printf("    %s\n", ((PERS*)jval_v(temp->val))->Name );

	printf("\n");

	PP->pout=1;
}


int main(int argc, char ** argv)
{

	char * key,*Name;
	int error;
	JRB people;
	people = make_jrb();


	PERS *CP,*OP;
//	JRB kid;
	JRB tmp;


	IS in;
	in = new_inputstruct(NULL);
	/*While loops that calls makepers
	 *  * sets a pointer = to makeperss
	 *   * does a couple of string compares to see what the first title in the file is
	 *    *puts the children in a dllist and does some error checking
	 *     */
	error=0;
	while(get_line(in) >= 0) 
	{
		if(in->NF > 1)
		{

			key=strdup(in->fields[0]);

			if(strcmp(key,"PERSON")==0)
			{

				CP=makepers(in, people);
			}

			if(strcmp(key,"Sex")==0)
			{
				if(strcmp(in->fields[1],"M")==0)
				{
					CP->Sex=strdup("Male");
				}
				if(strcmp(in->fields[1],"F")==0)
				{
					CP->Sex=strdup("Female");
				}
			}

			if(strcmp(key,"FATHER")==0)
			{
				OP=makepers(in, people);

				if(OP->Sex)
				{

					if(strcmp(OP->Sex,"Female")==0)
					{
						printf("error: %s cannot be both a father and a female\n", OP->Name);
						error=1;
					}

				}

				OP->Sex=strdup("Male");       
				if(CP->father==NULL)
				{
					CP->father=OP;

					dll_append(OP->Children,new_jval_v((PERS*) CP));

				}

				else if(CP->father != OP)
				{
					printf("ERROR: Child %s cannot have two fathers (%s, %s)\n",CP->Name,CP->father->Name,OP->Name);
					error=1;
				}

			}

			if(strcmp(key,"MOTHER")==0)
			{
				OP=makepers(in, people);

				if(OP->Sex)
				{

					if(strcmp(OP->Sex,"Male")==0)
					{
						printf("ERROR: %s cannot be both a mother and a male\n", OP->Name);
						error=1;
					}

				}


				OP->Sex=strdup("Female");

				if(CP->mother==NULL)
				{
					CP->mother=OP;

					dll_append(OP->Children,new_jval_v((PERS*) CP));

				}

				else if(CP->mother != OP)
				{

					printf("ERROR: Child %s cannot have two mothers (%s, %s)\n",CP->Name,CP->mother->Name,OP->Name);
					error=1;

				}

			}

			if(strcmp(key,"FATHER_OF")==0)
			{      
				if(CP->Sex)
				{

					if(strcmp(CP->Sex,"Female")==0)
					{
						printf("ERROR: %s cannot be both a father and a female\n", CP->Name);
						error=1;
					}

				}

				CP->Sex=strdup("Male");

				OP=makepers(in, people);

				if(OP->father==NULL)
				{
					dll_append(CP->Children,new_jval_v((PERS*) OP));

					OP->father=CP;
				}

				else if(OP->father != CP)
				{
					printf("ERROR: Child %s cannot have two fathers (%s, %s)\n",OP->Name,OP->mother->Name,CP->Name);
					error=1;
				}

			}

			if(strcmp(key,"MOTHER_OF") == 0)
			{

				if(CP->Sex)
				{
					if(strcmp(CP->Sex,"Male")==0)
					{
						printf("ERROR: %s cannot be both a mother and a male\n", CP->Name);
						error=1;

					}
				}

				CP->Sex=strdup("Female");

				OP=makepers(in, people);           

				if(OP->mother==NULL)
				{
					dll_append(CP->Children,new_jval_v((PERS*) OP));

					OP->mother=CP;
				}
				else if(OP->mother != CP)
				{
					printf("ERROR: Child %s cannot have two mothers (%s, %s)\n",OP->Name,OP->mother->Name,CP->Name);
					error=1;

				}

			}


		}

	}

	/*
	 *      *Traverse the tree
	 *           *Checks to see if the person is a descendent
	 *                *detects if there is a cycle in the family
	 *                     *if so it breaks
	 *                          */
	if(error == 0)
	{

		jrb_traverse(tmp, people)
		{
			CP = (PERS *) tmp->val.v;

			if(ifVisited(CP))
			{
				error=1;

				printf("Bad input -- %s is his/her own descendant\n",CP->Name);

				break;
			}
		}
	}

	/*
	 *      *Basic traversal to call the print function and print out correct information*/
	if(error == 0)
	{
		jrb_traverse(tmp, people)
		{
			CP = (PERS *) tmp->val.v;

			print(CP);
		}
	}

	jettison_inputstruct(in);

	return 0;
}


