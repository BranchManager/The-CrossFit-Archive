//Noah Branch
//Lab9
//ThisLab takes all the ones and shifts them
//Help form ksenia
#include <iostream>
#include <sstream>
#include <cstdlib>

using namespace std;

class Enum{
	//these are the functions that do the work along with the variables down below
	public:
		Enum(int len);
		void do_enumeration(int index, int ones);
		void print();

	protected:
		string s;
		int length;

};
void Enum::print(){
	cout<<s<<"\n";
}
//This prints the string of digits
Enum::Enum(int len){

	length=len;
	s.resize(length,'1');

}

void Enum::do_enumeration(int index, int ones){
//This is the function that determines where the number will be moved and how
	if (length == index){
		print();
		return;
	}

	if(length - index > ones){//THis index determines where the next one will be moved
		s[index] = '0';
		do_enumeration(index+1, ones);
	}

	if(ones  > 0){
		s[index] = '1';
		ones--;
		index++;
		do_enumeration(index, ones);
	}
}


int main(int argc, char **argv){

	if (argc != 3){cerr << "usage: enum length nones\n"; exit(1);}
	
	int len,numones;
	len=atoi(argv[1]);
	numones=atoi(argv[2]);
	Enum E(len); //here the function is called to resize the vector.


	E.do_enumeration(0,numones);
	

}
