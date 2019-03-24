#include<stdio.h>
#include<sys/stat.h>
#include<string.h>
#include<stdlib.h>
#include"dlist.h"
#include"fields.h"
#include"jval.h"

int file_exists(const char * filename)
{
	FILE * file; 
	if (file = fopen(filename, "r"))
	{
		fclose(file);
		return 1;
	}
	return 0;
}

int main(int argc, char *argv[])
{
	IS is;
	int i;
	int j=0;//first
	char * fname;//char * is a string
	char * e;//E
	int twin=0;//ex
	int llen=0;//liblen
	int olen=0;//objlen
	int flen=0;//flaglen
	int y =0;//exist
	time_t mt=0;//maxtime
	time_t tol;//maxotime
	time_t ct,ot;//ctime otime
	char * of,*cf;//ofile cfile
	int k;//make
	k=0;

	struct stat B;
	char * fl;//flag
	char * ob;//objs
	char * li;//libs

	int nc=0;//numcomps
	int ss;//susret
	int cp;//compilenlen
	char * comp;//compile


	Dllist c;
	Dllist tmp;
	Dllist h;
	Dllist f;
	Dllist l;

	c=new_dllist();
	h=new_dllist();
	f=new_dllist();
	l=new_dllist();


	if(argc !=2)
	{
		fname= malloc(10*sizeof(char));
		fname="fmakefile";
	}
	else
	{
		fname= argv[1];
	}

	is= new_inputstruct(fname);
	if(is==NULL)
	{
		perror("No file was available for fakemake");
		exit(1);//if there a problem just use return
	}

	//dlists containing the contents of the file 


	while(get_line(is)>=0) 
	{
		if(is->NF>0)//skips the blanks lines with this restriction
		{
			//we want to organize the file into dlists so that we have all the
			//c h f e l files and notifications we only need on executable if you see two there an error and 
			//flag it
			//	char *type;


			//printf("before %s\n",is->fields[0]);
			if(strcmp(is->fields[0],"C")==0)
			{
				for (i = 1; i < is->NF; i++)
				{
					olen=olen+strlen(is->fields[i])+1;
                   
					dll_append(c, new_jval_s(strdup(is->fields[i])));
				}
			}

			else if(strcmp(is->fields[0],"H")==0)
			{
				for (i = 1; i < is->NF; i++)
				{

					dll_append(h, new_jval_s(strdup(is->fields[i])));
				}
			}

			else if(strcmp(is->fields[0],"L")==0)
			{
				for (i = 1; i < is->NF; i++)
				{
					llen=llen+strlen(is->fields[i])+1;

					dll_append(l, new_jval_s(strdup(is->fields[i])));
				}
			}

			else if(strcmp(is->fields[0],"E")==0)
			{
				if(twin!=0)
				{
					perror("error\n");
					return 1;
				}
				e=strdup(is->fields[1]);
				twin=1;
			}

			else if(strcmp(is->fields[0],"F")==0)
			{
				for (i = 1; i < is->NF; i++)
				{
					flen=flen+strlen(is->fields[i])+1;

					dll_append(f, new_jval_s(strdup(is->fields[i])));
				}
			}

			else
			{
				fprintf(stderr,"Invalid line\n");
				return 1;
			}
		}//if
	}//while

//	printf("olen %d llen %d flen %d\n",olen,llen,flen);
	//if the executable is not present
	if(twin==0)
	{
		fprintf(stderr,"No executable specified\n");
		return 1;
	}

//		dll_rtraverse(tmp,c) printf("%s", jval_s(tmp->val));
	//printf("%s",e);



	dll_traverse(tmp,h){
		//y is exists

		y= stat(jval_s(tmp->val),&B);
		if(y<0)
		{
			perror("there isnt and h file\n");
			return 1;
			//fprintf(stderr,"no h file\n");
			//			exit(1);}
			//
	}


	if(B.st_mtime>mt)
	{
		mt=B.st_mtime;
	}




	li= malloc(llen*sizeof(char));
	fl= malloc(flen*sizeof(char));
	ob= malloc(olen*sizeof(char));

j=0;
//	printf("llen %d flen %d  olen %d\n", llen, flen, olen);

	//making room for the strings using malloc
	// then we set up each of the strings individually
	//

	dll_traverse(tmp,f)
	{
		if(j== 0)
		{
			strcpy(fl,tmp->val.s);
			j = 1;
		}
		else
		{
			sprintf(fl,"%s %s",fl,tmp->val.s);
		}

	}

	j = 0;
	//lib string being formed
	dll_traverse(tmp,l)
	{
		if(j== 0)
		{

			strcpy(li,tmp->val.s);

			j = 1;

		}
		else
		{
			sprintf(li,"%s %s",li,tmp->val.s);
		}

	}


	j=0;
	k=0;

	tol=0;
	
	int i=0;


	dll_traverse(tmp,c)
	{

	//	printf("%x\n",tmp);
//		printf("%s\n",tmp->val.s);
		
		y = stat(jval_s(tmp->val),&B);

//		printf("2\n");
//		printf("%s\n",tmp->val);
//		printf("%d\n",y);
		if(y < 0)
		{

			perror("fail\n");
//			fprintf(stderr,"fmakefile: %s: No such file or directory\n",tmp->val.s);

			return 1;

			//fprintf(stderr,"fmakefile: %s: No such file or directory\n",tmp->val.s);
			//			exit(1);
		}

//		printf("3\n");
		ct = B.st_mtime;

//		printf("4\n");
		of = strdup(jval_s(tmp->val));
		/////////
//		printf("5\n");
		cf = strdup(jval_s(tmp->val));

//		printf("6\n");
//		printf("cf %s\n",cf);
//		printf("3\n");
		of[strlen(of) - 1] = 'o';
	
//		printf("3\n");
//	    printf("%s\n",tmp->val);
	
//		printf("3\n");
		y = stat(of,&B);
		//check to see if we need to remake the file or not
//		printf("3\n");
		if(y < 0)
		{

			k = 1;

		}
			else
			{

				ot = B.st_mtime;

			}

		if( ot > tol)
		{

			tol = ot;

		}

		if( ct > ot || mt > ot)
		{

			k = 1;

		}

		//stops here
		if(k==1)
		{

			nc = nc + 1;

			if(flen == 0)
			{

				comp = malloc((8 + strlen(of))*sizeof(char));

				sprintf(comp,"gcc -c %s",cf);
			}
				else
				{
					printf("other 4\n");
					comp = malloc((9 + strlen(of)+flen)*sizeof(char));

					sprintf(comp,"gcc -c %s %s",fl,cf);
				}

			

			printf("%s\n",comp);

			ss = system(comp);


			if(ss!=0)
			{

				fprintf(stderr, "Command failed.  Exitting\n");


				return 1;

				//t != 0){
				//				fprintf(stderr, "Command failed.  Exitting\n");
				//								exit(1);
			}


			free(comp);
			

				//j is first
		//if

		//}
}
		if( j == 0)
		{
			strcpy(ob,of);

			j = 1;

		}

		else
		{

			sprintf(ob,"%s %s",ob,of);

		}


		free(of);

		free(cf);

		k = 0;





}//travers 

/*	dll_traverse(tmp,c)
	{
		    printf("%x\n",tmp);
	}
*/


		//Determine if we need to make the executable
		k = 0;	

		y = stat(e,&B);

		if(y < 0)
		{
			k = 1;
		}
		if(tol > B.st_mtime)
		{
			k = 1;
		}

		if(nc != 0)
		{

			k = 1;

		}

		char executable[10000];

		if( k == 1)
		{
			//making sure the sustem call works
			if(llen == 0 && flen == 0)
			{
				sprintf(executable,"gcc -o %s %s",e,ob);

				printf("%s\n",executable);

				ss =system(executable);

				if(ss != 0)
				{

					fprintf(stderr,"Command failed.  Fakemake exiting\n");

					exit(1);
				}

			}


			else if(llen == 0)
			{

				sprintf(executable,"gcc -o %s %s %s",e,fl,ob);

				printf("%s\n",executable);

				ss = system(executable);

				if(ss!= 0)
				{

					fprintf(stderr,"Command failed.  Fakemake exiting\n");

					exit(1);

				}

			}
			else if(flen == 0)
			{
				sprintf(executable,"gcc -o %s %s %s",e,ob,li);

				printf("%s\n",executable);

				ss = system(executable);
				if(ss!= 0)
				{
					fprintf(stderr,"Command failed.  Fakemake exiting\n");

					exit(1);
				}
			}
			else 
			{
				sprintf(executable,"gcc -o %s %s %s %s",e,fl,ob,li);

				printf("%s\n",executable);

				ss = system(executable);
				if(ss!= 0)
				{

					fprintf(stderr,"Command failed.  Fakemake exiting\n");

					exit(1);

				}


			}

		}
		//If we dont need to make an executable, exit	
		else if(k == 0)
		{
			printf("%s up to date\n",e);

			exit(1);

		}

		jettison_inputstruct(is);


		dll_traverse(tmp,f)
		{

			free(tmp->val.s);

		}
		free_dllist(f);

		dll_traverse(tmp,h)
		{

			free(tmp->val.s);

		}

		free_dllist(h);

		dll_traverse(tmp,c)
		{

			free(tmp->val.s);

		}

		free_dllist(c);

		dll_traverse(tmp,l)
		{

			free(tmp->val.s);}

		free_dllist(l);

		exit(0);

	}

}




















