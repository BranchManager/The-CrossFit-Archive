#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "jval.h"
#include "jrb.h"
#include "fields.h"

typedef struct{
	char *Name[100];
	char Sex;
	char *Father[100];
	char *Mother[100];
	JRB  children;
	char * visited;
	
	// something for the tree traversal
	//
	//
}Person;

int main(int argc, char **argv)
{

	if(argc!=2)
	{
		printf("There are not enough arguments on the line");
		exit(1);
	}

	IS is;
	int i;

	is = new_inputstruct(argv[1]);// reads the file from std in
	if (is == NULL) { // if the file cannot be read return null and exit
		perror(argv[1]);
		exit(1);
	}

	JRB people;
	people = make_jrb();
	
	while(get_line(is) >= 0) {  
/*	while getline(is) is not at the end of the file,
	because getline(is) returns the number of words in  a field.(returns nf)
	the first nf slots in the fields[] array point to the words
	*/
	//	if(is->field[0]=="PERSON")
	//	{
	//
	//	where going to make a while loop after reading in the person so that
	//	when we read in all the other stuff it will be under the same person
	//	and when were done with that person well break out of that loop and then 
	//	go into the next person.

			Person *p;//DO WE NEED TO MAKE A NEW P EVERY TIME?
			char name[1000];
			Person *tmp;
			//constructing the name
			strcpy(name, is->fields[1]); // copies word into name
			for (i = 2; i < is->NF; i++) 
			{
				strcat(name, " ");
				strcat(name, is->fields[i]);// attached a space and a word to the name
			}


			if( jrb_find_str(people, name)== NULL)//if you dont find the name
			{
				p = malloc(sizeof(Person));//allocates memory before you insert
				jrb_insert_str(people, name, new_jval_v((void *) p));// now insert into tree		
				p->name= name;
				tmp= p;
			}
			
			while(getline(is)>0)
			{

				if(is->field[0]=="SEX")
				{
					if(is->field[1]=='F')
						P->Sex='F';
					else
						p->Sex='M';
				}
				if(is->field[0]=="FATHER")
				{
					char name[1000];
				
					strcpy(name, is->fields[1]); // copies word into name
					for (i = 2; i < is->NF; i++)
					{
						strcat(name, " ");
						strcat(name, is->fields[i]);// attached a space and a word to the name
					}
					strcpy(p->Father,name);

					if( jrb_find_str(people, name)== NULL)//if you dont find the name
					{
						Person *tmp;
						tmp = malloc(sizeof(Person));//allocates memory before you insert
						jrb_insert_str(people, name, new_jval_v((void *) tmp));// now insert into tree        
						tmp->name= name;
					
						//	tmp->children=p->name;
					}


				}		
						if(is->field[0]=="MOTHER")
						{

						}
						if(is->field[0]=="FATHER_OF")
						{

						}
						if(is->field[0]=="MOTHER_OF")
						{

						}
			}

		//is line is the # of the line
		//fields[i] is the word in the field
	void jettison_inputstruct(IS is);// closes the file

}



















