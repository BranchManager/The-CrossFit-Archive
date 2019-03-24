#include <fstream>
#include <sstream>
#include <cstdlib>
#include <cstdio>
#include <algorithm>
#include "bitmatrix.h"

Bitmatrix::Bitmatrix(int rows, int cols)
{
	/*int r=rows, c=cols;

	  M.resize(r);
	  for(int x=0;x<r;x++){
	  M[x].resize(c);
	  }
	//cout<<M.size()<<endl;
	//cout<<M[0].size()<<endl;
	for(int i=0;i<r;i++){
	for(int j=0;j<c;j++){
	M[i][j]='0';
	}
	}*/
	if(rows<1||cols<1){
		printf("error message \n");
		M.resize(1);
		M[0].resize(1,'0');
	}
	M.resize(rows);
	for(int i=0;i<rows;i++){
		M[i].resize(cols,'0');
	}

	//return;
}

int Bitmatrix::Rows()
{
	return M.size();
}

int Bitmatrix::Cols()
{
	return M[0].size();
}

void Bitmatrix::Set(int row, int col, char val)
{
	if(row<0||row>=M.size()){
		return;
	}
	if(col<0||col>=M[0].size()){
		return;
	}
	//	cout<<val;
	if(val==1|| val==0){
		val=val+'0';
		//	cout<<val;
		//	M[row][col]=val;
	}
	M[row][col]=val;

}

char Bitmatrix::Val(int row, int col)
{

	if(row<0||row>=M.size()){
		return -1;
	}
	if(col<0||col>=M[0].size()){
		return -1;
	}

	return M[row][col]-'0';
}

void Bitmatrix::Print(int w) 
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
		//	cout<<"\n";
	}
}

void Bitmatrix::Write(string fn) 
{
	ofstream fileout;

	fileout.open(fn.c_str());
	if(fileout.fail()){
		fprintf(stderr,"Bad matrix file %s\n",fn.c_str());
	}

	for(int i=0; i<M.size();i++){
		for(int j=0; j<M[0].size();j++){
			fileout<<M[i][j];

		}
		fileout<<"\n";
	}
	fileout.close();


}

void Bitmatrix::Swap_Rows(int r1, int r2)
{
	if(r1<0||r1>M.size()){
		return ;
	}
	if(r2<0||r2>M.size()){
		return ;
	}

	string swap = M[r2];
	M[r2]=M[r1];
	M[r1]=swap;

}

void Bitmatrix::R1_Plus_Equals_R2(int r1, int r2)
{
	if(r1<0||r1>=M.size()){
		return;
	}
	if(r2<0||r2>=M.size()){
		return;
	}
	for(int i=0;i<M[r1].size();i++){
		M[r1][i]=(((M[r1][i]-'0')+(M[r2][i]-'0'))%2)+'0';
	}
}

Bitmatrix::Bitmatrix(string fn) 
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

void Bitmatrix::PGM(string fn, int pixels, int border)
{
	ofstream bitpic;

	bitpic.open(fn.c_str());
	int col=(pixels*M[0].size())+(border*M[0].size())+border;
	int row=(pixels*M.size())+(border*M.size())+border;

	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			if(i%(border+pixels)>=border && j%(border+pixels)>=border){
				if(Val(i/(pixels+border),j/(pixels+border))== 0){
					bitpic<<"255 ";
				}else{
					bitpic<<"100 ";

				}

			}
			else{
				bitpic<<"0 ";

			}

		}

		bitpic<<"\n";
	}
	bitpic.close();
}

Bitmatrix *Bitmatrix::Copy()
{
	int row,col;
	row=M.size();
	col=M[0].size();
	Bitmatrix *m=new Bitmatrix(row,col);
	for(int i=0; i<M.size(); i++){
		for(int j=0; j<M[0].size();j++){
			m->Set(i,j,Val(i,j));
		}

	}
	return m;
}


BM_Hash::BM_Hash(int size)
{
	table.resize(size);

}

void BM_Hash::Store(string &key, Bitmatrix *bm)
{
	int i;
	unsigned int h;

	h= 5381;

	for(i=0; i<key.size(); i++){
		h=(h<<5) + h + key[i];
	}
	int result = h%table.size();
	for(int j =0; j<table[result].size();j++){
		if(table[result][j]->key == key){
			table[result][j]->bm = bm;
		}
	}

	HTE *tmp;
	tmp=new HTE;
	tmp->key = key;
	tmp -> bm = bm;
	table[result].push_back(tmp);


	/*	int i;
		unsigned int h;

		h = 5381;

		for(i = 0; i < key.size(); i++){
		h = (h<<5) + h + key[i];
		}

		int result = h%table.size();
		for(int j = 0;j<table[result].size();j++){
		if(table[result][j]->key == key){
		table[result][j]->bm=bm;
		}
		}

		HTE *tmp;
		tmp = new HTE;
		tmp->key = key;
		tmp->bm = bm;
		table[result].push_back(tmp);*/


}


Bitmatrix *BM_Hash::Recall(string &key)
{

	int i;
	unsigned int h;

	h=5381;
	for(i=0; i<key.size();i++){
		h=(h<<5)+h+key[i];
	}
	int result = h%table.size();
	for(int j =0; j<table[result].size();j++){
		if(table[result][j]->key==key){
			return table[result][j]->bm;

		}

	}
	return NULL;
}

HTVec BM_Hash::All()
{
	HTVec rv;
	for(int i = 0; i<table.size();i++){
		for(int j=0; j<table[i].size();j++){
			rv.push_back(table[i][j]);
		}
	}
	//	return rv;
	/*  for(int i =0; i<table.size();i++){
		for(int j=0;j<table.size();j++){
		rv.push_back(table[i][j]);
		}
		}*/
	return rv;
}


Bitmatrix *Sum(Bitmatrix *m1, Bitmatrix *m2)
{
	Bitmatrix *bm;

	if(m1->Rows() != m2->Rows()||m1->Cols() != m2->Cols()){
	return NULL;
	}

	bm = new Bitmatrix(m1->Rows(), m1->Cols());

	char val;
	for(int i=0;i<m1->Rows();i++){
		for(int j=0;j<m1->Cols();j++){
			val = (m1->Val(i,j)+m2->Val(i,j))%2;
			bm->Set(i,j,val);

		}

	}
	return bm;

}

Bitmatrix *Product(Bitmatrix *m1, Bitmatrix *m2)
{
	Bitmatrix *bm;
	bm = new Bitmatrix(m1->Rows(), m2->Cols());
	char val;

	for(int i=0;i<m1->Rows();i++){
		for(int j=0;j<m2->Cols();j++){
			val = 0;
			for(int k=0; k<m1->Cols();k++){
				val += (m1->Val(i,k) * m2->Val(k,j));
			}
			val = val%2;

			bm->Set(i,j,val);
		}

	}
	return bm;
}

Bitmatrix *Sub_Matrix(Bitmatrix *m, vector <int> &rows)
{
	if (rows.size() == 0){
		return NULL;
	}
	for(int check = 0; check<rows.size(); check++){
		if(rows[check]<0 || rows[check]>=m->Rows()){
			return NULL;
		}
	}

	Bitmatrix *M = new Bitmatrix(rows.size(), m->Cols());

	for(int i=0; rows.size();i++){
		for(int j=0; j<m->Cols();j++){
			M->Set(i,j,m->Val(rows[i],j));
		}
	}
	return M;
}

Bitmatrix *Inverse(Bitmatrix *m)
{
	return NULL;
}
