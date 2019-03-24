//Noah Branch 
//lab 5
// The Objective of this lab is to create and modify methods that methods that
// allow you to create, read, write and manipulate bit-matrices.


#include <typeinfo>
#include <fstream>
#include <vector>
#include <sstream>
#include <cstdlib>
#include <cstdio>
#include <algorithm>
#include "bitmatrix.h"

Bitmatrix::Bitmatrix(int rows, int cols)//bitmatrix constructo funtion
{
	int i;

	if(rows<=0 || cols<=0)//if row or cols is less than or equal to zero
	{
		printf(" ");//pritn a space and then resize the col and rows of the matrix 
		M.resize(1);
		M[0].resize(1);
	}
	else{

		M.resize(rows);//else resie the row

		for(i=0;i<M.size();i++)//then go throug a for loop to resize the cols to zero
		{
			M[i].resize(cols,'0');
		}
	}
}

int Bitmatrix::Rows()
{
	return (M.size());   //returns M.size() which is rows
}

int Bitmatrix::Cols()
{
	return (M[0].size()); //returns M[0].size which is cols.
}

void Bitmatrix::Set(int row, int col, char val)//this sets the index row col to the char val
{int i,j,g,h;

	if(row > M.size() || col >M[0].size())//if the row of col is outside of the matrixes dimesions
	{
		exit(1);
	}
	else{
				if(val=='0')//else if val is char 0 or int 0 set the index to char 0;
				{
					M[row][col]='0';
				}
				else if(val=='1')//the same for char 1 or int 1 set the index at row col to char 1
				{	M[row][col]='1';
				}
				else if (val==0)
				{
					M[row][col]='0';
				}
				else if(val==1)
				{   M[row][col]='1';
				}




	}

}

char Bitmatrix::Val(int row, int col) //returns the val at the specified row col
{

	if(row<0 || row>M.size() || col<0 || col>M[0].size())//if the row or col is outside of the dimesions of the matrix then return -1
	{
		return -1;
	}
	else{	//otherwise just return the char at row col in the matrix
		return M[row][col]-'0';// returns the value of the pixel
	}
}

void Bitmatrix::Print(int w) //Prints the specified bit matrix he wrote it for us
{
	int i, j;

	for (i = 0; i < M.size(); i++) {
		if (w > 0 && i != 0 && i%w == 0) printf("\n");
		if (w <= 0) {
			cout << M[i] << endl;
		} else {
			for (j = 0; j < M[i].size(); j++) {
				if (j % w == 0 && j != 0) printf(" ");
				printf("%c", M[i][j]);
			}
			cout << endl;
		}
	}
}

void Bitmatrix::Write(string fn) //writes the bitmatrix to a file
{
	ofstream file;//o stream file
	int i,j;

	file.open( fn.c_str() );//open the specified fn

	for(i=0;i<M.size();i++)//go through the rows and the cols 
	{
		for(j=0;j<M[i].size();j++)
		{
			file<<M[i][j];   //prints the i j char of the matrix to the file.
		}
		file<<endl;//then the endline for each row
	}

}

void Bitmatrix::Swap_Rows(int r1, int r2)//swaps the specified rows
{
	int i,j;
	string  temp;//temperory variable temp
	if(r1<0 || r1>M.size())//if row 1 is outside of the matrix exit
	{
		exit(1);
	}
	if(r2<0 || r2>M.size())//the same if r2 is outside of the matrix exit
	{
		exit(1);
	}



	temp=M[r1];//eles set r1 to temp
	M[r1]=M[r2];//st r1 equal to r2
	M[r2]=temp;//then just set temp equal to r2

}

void Bitmatrix::R1_Plus_Equals_R2(int r1, int r2)//set r1 equal to the addition of r1 and r2
{
	int i,j,g,h;
	istringstream ss,dd;//i stringstream ss and dd
	string temp;//temp variabl 
	int s,d;
	i=0;//set i equal to zero
	temp="";//set temp equal to an empty string 
	if(r1<0 || r1>M.size())//if r1 or r2 are outside of the matrix return 
	{
		return;
	}
	if(r2<0 || r2>M.size())
	{
		return;
	}
	while(i<M[r1].size())//while i is less than the size of r1 cols
	{

		if( (M[r1][i]-'0')+ (M[r2][i]-'0')==1)//if r1 and r2s ith char added equals 1 then add '1'it to temp and increment i
		{
			temp+='1';
			i++;
		}
		else if( (M[r1][i]-'0')+ (M[r2][i]-'0')==0)//if r1 and r2s ith char added equals 0 then add '0' it to temp and increment i
			 
		{
			temp+='0';
			i++;
		}
		else if( (M[r1][i]-'0')+ (M[r2][i]-'0')==2)//if r1 and r2s ith char added equals 2 then add '0'  temp and increment i
			 
		{
			temp+='0';
			i++;
		}


	}


	M[r1]=temp;//finally set r1  equal to the addition of r1 and r2 which is temp


}

Bitmatrix::Bitmatrix(string fn) //bitmatrix to open a specifid file his code
{
	ifstream f;
	int i, j;
	string s, row;

	f.open(fn.c_str());
	if (f.fail()) { perror(fn.c_str()); M.resize(1); M[0].resize(1), M[0][0] = '0'; return; }

	while (getline(f, s)) {
		row.clear();
		for (i = 0; i < s.size(); i++) {
			if (s[i] == '0' || s[i] == '1') {
				row.push_back(s[i]);
			} else if (s[i] != ' ') {
				fprintf(stderr, "Bad matrix file %s\n", fn.c_str());
				M.resize(1); M[0].resize(1), M[0][0] = '0'; 
				f.close();
				return;
			}
		}
		if (s.size() > 0 && M.size() > 0 && row.size() != M[0].size()) {
			fprintf(stderr, "Bad matrix file %s\n", fn.c_str());
			M.resize(1); M[0].resize(1), M[0][0] = '0'; 
			f.close();
			return;
		}
		if (s.size() > 0) M.push_back(row);   
	}
	f.close();
}

void Bitmatrix::PGM(string fn, int pixels, int border)//copys the matrix to the pgm file with a set pixel and border
{
	ofstream file;//output file stream fie
	int p,i,f,j,q,k,l,z,n,N,o,sizeofmatrix,b,c;//integers to interate through loops
	int w,h;//the width and height of the matrix


	file.open(fn.c_str());//open the file
	if(file.fail())// if it fails to open cerr the the file failed to open
	{
		cerr<<"file failed";
	}

	w=(pixels*Cols()+(Cols()+1)*border);//set the width to th addition of the pixels*the cols plus cols+one time the border
	h=(pixels*Rows() + (Rows()+1)* border);//set the height to pixels time the rows plus the rows plus one times the border
	
	file<<"P2"<<endl;//the format of the pgm file p2 then the rows and the cols which is w and h
	file<<w<<" "<<h<<endl;
	file<<"255"<<endl;//then the 255 at the end of it 

	if(border>0)//if border is more than zero
	{
		for(n=0;n<border;n++)//go through the border
		{
			for(o=0;o<w;o++)//then go through the width of the matrix
			{
				file<<"0 ";//set it all to zero
			}
			file<<endl;//endl after each row
		}
	}

	for(f=0;f<Rows();f++)//go throught the rows
	{
		for(p=0;p<pixels;p++)//then the pixels for that individual char
		{
			for(k=0;k<border;k++)//then go through the border that was specified
			{
				file<<"0 ";//set that equal to zero
			}
			for(l=0;l<Cols();l++)//go through the cols
			{
				for(z=0;z<pixels;z++)//hen go through the pixel again
				{
					if(Val(f,l)==0)//if the vall is zero set it to 255 if its one set it equal to 100
					{
					file<<"255 ";
					}
					if(Val(f,l)==1)
					{
					file<<"100 ";
					}
				}
				for(b=0;b<border;b++)//go through the border and set it to zero
				{
					file<<"0 ";
				}
			}
			file<<endl;//endl for th eend of a row
		}
		if(border>0)//if the border is more than zero
		{
			for(N=0;N<border;N++)//go through the border again
			{
				for(q=0;q<w;q++)//then go through the width 
				{
					file<<"0 ";//set that to zero
				}
				file<<endl;//endl at the end of a row
			}

		}
	}

	file<<endl;//and endl after the matrix
	file.close();//then close the file
}


Bitmatrix *Bitmatrix::Copy()//copys the current bitmatrix
{
	Bitmatrix *p;//pointer p to a bitmatrix
	p=new Bitmatrix(Rows(),Cols());//make a new bitmatrix
	int i,j;

	for(i=0;i<Rows();i++)//go throug the rows and cols of the matrix
	{
		for(j=0;j<Cols();j++)
		{
			p->Set(i,j,Val(i,j));//set the new matrix to the val of the old matrix

		}

	}

	return p;//return the new copy matrix

}


BM_Hash::BM_Hash(int size)//resizes the hash table to the specified size
{
	table.resize(size);//resize the hash table

}

unsigned int djb_hash(string &s)//djb hash used so we can hash in the following methods
{
	int i;
	unsigned int h;
	h=5381;
	for(i=0;i<s.size();i++)
	{
		h=(h<< 5) + h + s[i];
	}
	
	return h;
}
void BM_Hash::Store(string &key, Bitmatrix *bm)//this will store the key and the bm in the hash table
{
	unsigned int hashnum, index;//these int will be used with the hash function
	int i,j,k;
	HTE *p;//hte pointer p
	j=0;//set j equal to zero
	hashnum = djb_hash(key);//set the result of the has to hashnum	
	index = hashnum%table.size();//then set the index to hashnum mod the table size

	for(i=0;i<table[index].size();i++)//look through the vector at the spcified index
	{
			if(table[index][i]->key==key)//then if the key is equal to key just set the tables bm to bm then return
			{	
			table[index][i]->bm=bm;
			return;
			}
	}
	
	p=new HTE;//if the key is never found just make a new one and set the keys and bm to each other
	p->key=key;
	p->bm=bm;

	table[index].push_back(p);//then push the new hte into the table
}
Bitmatrix *BM_Hash::Recall(string &key)//this returns the bm with the given key
{
	int i,j,k,l;
	unsigned int index,hashnum;//more ints to be used with the hash function
	k=0;//set k i and l to zero
	i=0;
	l=0;

	hashnum = djb_hash(key);//set the hash result to hashnum
	 index = hashnum%table.size();//set the index to hashnum mod table size

		while( l<table[index].size())//while l is less thant the vector size
		{
			if(table[index][l]->key==key)//if the vectors key is the same
			{
			return table[index][l]->bm;//return that vectors indexs bm
			k=1;//then set k=1
			}
			l++;//increment l
		}
		
	if(k==0)//if k is still zero we didnt find it and return null
	{
		return NULL;
	}
}

HTVec BM_Hash::All()//this returns a vector of all hash table entries in the table
{
	HTVec rv;//new htvec rv
	int i,j;
	for(i=0;i<table.size();i++)//go throught the tables vectors and there indexes
	{	
		for(j=0;j<table[i].size();j++)
		{
		rv.push_back(table[i][j]);//push all of that back into the htve rv
		}
	}
	return rv;//then return rv
}


Bitmatrix *Sum(Bitmatrix *m1, Bitmatrix *m2)//returns the sum of m1 and m2
{
	int i,j,k,value;//ints i j k and value
	Bitmatrix *p;//bitmatrix pointer p


	if(m1->Cols()!=m2->Cols() || m1->Rows()!= m2->Rows())//if the cols and rows dont match for both matrices then return null
	{
		return NULL;
	}
	else
	{
	p=new Bitmatrix(m1->Rows(),m1->Cols());//else make a new bitmatrix wit the sane dimensions as bot matrices
	
	for(i=0;i<m1->Rows();i++)//go througth the rows and cols of the matrix
	{
		for(j=0;j<m1->Cols();j++)
		{
			value=((m1->Val(i,j)))+((m2->Val(i,j)));//then set the addition of each char in each matrix equal to value
			if(value==0)//if value is iequal to zero set the i j index to '0'
			{
				p->Set(i,j,'0');
			}
			else if(value==1)//if value is iequal to one set the i j index to '1'
			{
				p->Set(i,j,'1');
			}
			else if(value==2)//if value is iequal to two set the i j index to '0'
			{
				p->Set(i,j,'0');
			}
		}
	}

	return p;//then return the new bitmatrix p
	}

}

Bitmatrix *Product(Bitmatrix *m1, Bitmatrix *m2)//returns the product of m1 and m2
{
	int i,j,k,l,value,col,mod;//int used int the funtion
	Bitmatrix *product;//pointer to a bitmatrix
	k=0;//set k value and col to zero
	value=0;
	col=0;
	if(m1->Cols()!= m2->Rows())//if the col and rows of m1 and m2 dont match return null
	{
		return NULL;
	}
	else
	{
		product=new Bitmatrix(m1->Rows(),m2->Cols());//make a new bm with m1 rows and m2 cols

		for(i=0;i<m1->Rows();i++)//iterate through the rows and cols
		{
			for(j=0;j<m2->Cols();j++)
			{
				for(k=0;k<m1->Cols();k++)//go through m1s cols
				{
				value+=((m1->Val(i,k)))*((m2->Val(k,j)));//set value equal to the product of the value in m1 ik and m2 kj 
				}
				mod=value%2;//then value mod 2 is now equal to mod
				if(mod==0)//if mod is equal to 0 then set products ij element to '0'
				{
					product->Set(i,j,'0');
				}
				else if(mod==1)//if mod is equal to 1 then set products ij element to 1
				{
					product->Set(i,j,'1');
				}
				
				value=0;//then reset value to zero
			}	
		}
		

		return product;//then return the new produt bitmatrix
	}
}

Bitmatrix *Sub_Matrix(Bitmatrix *m, vector <int> &rows)//this makes a matrix of the specified rows
{
	int i,j,k,l,x;//ints 
	j=0;//j equals zero
	Bitmatrix *p;//pointer p to a bitmatrix
	if(rows.size()==0)//if the rows vector is empty return null
	{
		return NULL;
	}
	

	while(j!=rows.size())//while j is not equal to rows.size()
	{
	if(rows[j]>m->Rows() || rows[j]<0)//if the rows are more than the rows or less than zero then return null
	{
		return NULL;
	}
	j++;//then increment j
	}
	
	p=new Bitmatrix(rows.size(),m->Cols());//then make a new bitmatris whti the rows .sixe rows and m->cols cols
		
		
			for(x=0;x<rows.size();x++)//iterate throught the rows and the cols
			{
				 for(k=0;k<m->Cols();k++)
				{
					p->Set(x,k,m->Val(rows[x],k));//set the new matrixs xk index to val if the rowx k
				}
			}
		
return p; //finally return the new bitmatrix p

}

Bitmatrix *Inverse(Bitmatrix *m)//this inverts the specified bit matrix
{
	Bitmatrix *inv;//new inv and copy pointer to bitmatrix
	Bitmatrix *copy;
	int i,j,k,l,x,f,yes;//ints for iterating
	int a,b,c,d;//ints for iterating
	yes=0;//set yes to zero
	if(m->Rows()!=m->Cols())//if its not a square return null
	{
		return NULL;
	}
	l=0;//set l to zero
	//error check if it can be inverted or not
	copy=m->Copy();//set copy to a copy of matrix m
	inv= new Bitmatrix(m->Rows(),m->Cols());//make a new inv matrix with m rows and cols
	for(i=0;i<m->Rows();i++)//then set it to be an identity matrix with inv i i to one
	{
		inv->Set(i,i,1);
	}

	for(j=0;j<copy->Rows();j++)//then go through the rows
	{
		if(copy->Val(j,j)!=1)//if copys val jj is not one
		{
			k=j+1;//set k to j+1
			while(k<copy->Rows() && yes==0)//then while k is less than copys rows and while yes is zero
			{
				if(copy->Val(k,j)==1)//if copy val k,j is equal to 1
				{
					copy->Swap_Rows(j,k);//swap rows j ank k for both copy and inv
					inv->Swap_Rows(j,k);
					yes=1;//then set yes to one to break the loop
				}
				else{k++;}//els increment k
			}
			if(yes==0)//if yes is still zero then the matrix is not invertabel and return null
			{
				delete inv;
				return NULL;
			}
		}
		yes=0;//then reset yes to zero
	
			for(x=j+1;x<copy->Rows();x++)//then go through rows again 
			{
				if(copy->Val(x,j)==1)//if the val x j in copy is one
				{	
						copy->R1_Plus_Equals_R2(x,j);//do plus equals on x and j for inv and copy
						inv->R1_Plus_Equals_R2(x,j);
				}
			}
		
	}
	
	for(int a=copy->Rows()-1;a>=0;a--)//then go through copy backwards
	{
		for(b=a+1;b<copy->Cols();b++)//then go through all the rows more thn a
		{
				if(copy->Val(a,b)==1)//if copy val a b is 1
				{
					copy->R1_Plus_Equals_R2(a,b);//the plus equalt a b for both inv and copy
					inv->R1_Plus_Equals_R2(a,b);

				}
		}
		



	}



	return inv;//then return the inverse bitmatrix

}

