//Corey VEreen
//cs360
//lab4
#include<stdio.h>
#include<dirent.h>
#include<stdlib.h>
#include <sys/stat.h>
#include<string.h>
#include"dlist.h"
#include <fcntl.h>
#include<limits.h>
#include <utime.h>
#include"fields.h"
#include"jval.h"
#include"jrb.h"



struct dirst
{
	time_t atime;
	
	time_t mtime;
	
	int  cmode;
};




process_files(char * tfile,JRB hardlinks,JRB rp)
{
	struct stat buffer; 
	struct dirent *de;
	struct stat buf;
	DIR *d;
	unsigned char BUFF[1024];
	int total_size;
	int exists;
	int inf;
	int type;
	int buffl;
	Dllist l;
	Dllist lmp;
	IS is;
	char find[PATH_MAX];
	char * newspace;

	//normal file just add to tarball print it out
	//directory go through it and its children
	//
	//realpath
	//so your going to call real path along with stat and it should
	//return a string with the real path value so just make a rgb tree 
	//of char * s and if the file comes up again and has the same value
	//as a string in the tree we should ignore it
	//ex:: ./jtar c tfil.c tfil.c tfil.c
	//it should do the first one and ignore the others



	//hardlink
	//for hardlink whenever you call lstat or stat you will find out
	//what file points to what inode; if the files point 
	//to the same inode they are hardlinks to each other
	//if you get a new inode number put it in the tree else
	//keep moveing but make note that the file is a harlink of 
	//the other files
	



	realpath(tfile,find);
	if(jrb_find_str(rp,find) != NULL)//find is path
	{
		return;
	
	}
	else
	{
		jrb_insert_str(rp,strdup(find),JNULL);
	
	}

	
	lstat(tfile, &buffer);
	type= printf("%d\n",strlen(tfile)); //prints the length of the file
	type= printf("%s\n",tfile);

	


	if(S_ISDIR(buffer.st_mode)!=0)//if it is a directory
	{

		   d= opendir(tfile);

			if (d == NULL) 
			{
				printf ("Cannot open directory '%s'\n", tfile);
				return 1;
			}
		
			newspace= (char *) malloc(sizeof(char)*(strlen(tfile)+258));//////////////////th
			
			l= new_dllist();/////////////////////////////////////////

		
			for(de=readdir(d); de!=NULL; de=readdir(d))//reading the directory
			{ 
				sprintf(newspace,"%s/%s",tfile,de->d_name);

				exists = lstat(de->d_name,&buffer);//name of file seeing if it exists
				if(exists<0)//if the stat call fails
				{
					fprintf(stderr, "Couldn't stat %s\n", newspace);
				}


					if( (strcmp(".",de->d_name)==0) || (strcmp("..",de->d_name)==0) )
					{}
					else
					{
					dll_append(l,new_jval_s(strdup(newspace)));

					}

		
			}



			closedir(d);

					dll_rtraverse(lmp, l)
					{process_files(jval_s(lmp->val),hardlinks,rp);}//call process files on them
					//for recursion
					//above is the recursive call and will print out dlist witout it
					//
					//two rb-trees -- one keyed on inode number, and one keyed on realpath values??
					free(l);
	}

	else if(S_ISREG(buffer.st_mode)!=0)//its just a file
{
	if(jrb_find_int(hardlinks,buffer.st_ino) == NULL)
	{
		jrb_insert_int(hardlinks,buffer.st_ino,JNULL);
		
		inf = open(tfile, O_RDONLY);//////////////////////////////////////////////////////
		
		for(buffl = read(inf,BUFF,1024) ; buffl > 0 ; buffl = read(inf,BUFF,1024))
		{
			
			fwrite(BUFF,1,buffl,stdout);
		
		}
		
		close(inf);
	}
}
else
{
	printf("weird directory\n");

}

	//directories 
	//jtar c . > ~/tarfile tars all the files in the directory given
	//jtar x < ../tarfile spits all the files in the tarfile into the current directory
	//


}



void READ(JRB hardlinks,JRB direct)
{
	char FILENAME[PATH_MAX];
    JRB lmp;
	int amount;
	int BUFF;
	int i;
	int rbytes;
	int LENGTH;
	int E;
	struct utimbuf* time;
	struct dirst* DIRST;
	struct stat buffer;
	unsigned char* FL;
	unsigned char newbuf[1024];
	JRB Temp;
	int k;
	
	
	time = malloc(sizeof(struct utimbuf));

	while((k =scanf("%d\n",&LENGTH))== 1)
	{
		fread(FILENAME,1,LENGTH+1,stdin);
		
		FILENAME[LENGTH]= '\0';
		
		fread(&buffer,sizeof(struct stat),1,stdin);
		
		amount=buffer.st_size;
		
		rbytes= amount%1024;
		
		FL =malloc(amount*sizeof(char));
		
		BUFF =amount/1024;

		if( S_ISREG(buffer.st_mode)!= 0 )
		{
			if(jrb_find_int(hardlinks,buffer.st_ino)==NULL)
			{
				
		jrb_insert_int(hardlinks,buffer.st_ino,new_jval_s(strdup(FILENAME)));

		E = open(FILENAME,O_WRONLY | O_CREAT | O_TRUNC, 0777);
				
				if(E<0)
				{
					perror("problem in accessing the file\n");
					
					return ;
				}
				
				for(i= 0;i <BUFF;i++)
				{
					fread(newbuf, 1,1024, stdin);
					
					write(E, newbuf, 1024);
				
				}
				
				if( rbytes )
				{
					fread(newbuf ,1 , rbytes , stdin );
					
					write(E, newbuf , rbytes);
				
				}
				
				chmod(FILENAME,buffer.st_mode);
				
				time->actime= buffer.st_atime;
				
				time->modtime =buffer.st_mtime;

				utime(FILENAME,time);
				
				close(E);
			}
			else
			{
				Temp = jrb_find_int(hardlinks,buffer.st_ino);
				
				link(Temp->val.s,FILENAME);
			}
		}
		
		if(S_ISDIR( buffer.st_mode) )
		{
			E = mkdir(FILENAME,0777);
			
			DIRST = malloc(sizeof(struct dirst));
			
			DIRST->atime= buffer.st_atime;
			
			DIRST->mtime=buffer.st_mtime;
			
			DIRST->cmode =buffer.st_mode;
			
			jrb_insert_str(direct, strdup(FILENAME), new_jval_v((void*)DIRST) );
			
			close(E);
		}

	}




	jrb_rtraverse(lmp,direct)
	{
		DIRST = (struct stat*) lmp->val.v;

		chmod(lmp->key.s,DIRST->cmode);

		time->actime = DIRST->atime;

		time->modtime = DIRST->mtime;

		utime(lmp->key.s,time);

	}        


}

int main(int argc, char *argv[])
{
		JRB hardlinks, tmp;
		JRB rp, rmp;
		hardlinks = make_jrb();
		rp= make_jrb();
		int i;
		
		if(strcmp("c",argv[1])==0)
		{
			//make tarfile and print out to stdout 
			for( i=2;i<argc;i++) //for loop for other files if any us for rp  
            {
				process_files(argv[i],hardlinks,rp);
			}

		}
		
		else if(strcmp("x",argv[1])==0)
		{
			READ(hardlinks,rp);
		}
		else 
		{
			perror("file and directory is wrong\n");


		}

		


}

