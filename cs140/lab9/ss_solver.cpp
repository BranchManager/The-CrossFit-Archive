//Noah Branch Lab9
//this lab solves a puzzle that uses a grid
//Major help from Ksenia (Thanks)
//
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <cstdio>
using namespace std;


class sshifter{
	protected:   //contains vectors that hold the shapes snd thr grids
		vector<vector<string> >shapes; 
		vector<string>grid;
		vector<vector<int> >solution;
	public:
	// holds the functions that do the work
		sshifter(int a,char **);
		void apply(int index,int row, int column );
		bool findsolution(int index);
		void print();
		void printgrid();
		void read_shape();

};
bool sshifter::findsolution(int index){
	
//	this solution uses the apply function to find te solution to the puzzle
	solution.resize(shapes.size()); //resizes shapes vector after the shapes arr used.
	//next we have ti declare a vector to keep position
	vector<int>pos;
	bool t;
	if(shapes.size()== index){
		for(int o=0;o<grid.size();o++){
			for(int y=0;y<grid[o].size();y++){
				if(grid[o][y]== '0'){
					return false;
					//This is the base case which test if the grid is all ones
				}
			}
		}

		return true;
		
	}
	int w = grid.size()-shapes[index].size();
	int h = grid[0].size()-shapes[index][0].size();
//	The declarations above are used to make sure the the sheape stays within the bounds of the grid
	
	for(int r=0;r<=w;r++){
		for(int c=0;c<=h;c++){
//			here we apply the shape to the grid
			apply(index,r,c);


			t=findsolution(index+1);
			//If t returns true then we save the coordinates and return true. otherwise we call apply again to reset the grid
			if(t==true){
				pos.push_back(r);
				pos.push_back(c);
				solution[index]=pos;
				return true;
			}
			else{
				apply(index,r,c);
			}
		}
	}

	return false;
}

void sshifter::print(){

//	This function prints the grid and the coordinates at which it lies
	int i;
	for(int o=0;o<shapes.size();o++){
		for(int y=0;y<shapes[o].size();y++){
			cout<<shapes[o][y]<<" ";
		}
		cout<<solution[o][0]<<" "<<solution[o][1]<<endl;
	}
}


void sshifter::printgrid(){

	for(int j=0; j<(int)grid.size();j++){
		for(int x=0;x<grid[j].size();x++){
			cout<<grid[j][x]<<" ";
		}
	cout<<endl;
	}
}

void sshifter::apply(int index, int row, int col){

//	This function applies the shape to the grid depending on the rows and columns enter in as arguments
	for(int i=0; i<(int)shapes[index].size();i++){


		for(int j=0; j<shapes[index][i].size();j++){
			int q=grid[i+row][j+col]-'0';
			int w=shapes[index][i][j]-'0';
			int xorr=q^w;
			char xorchar=xorr+'0';
			grid[i+row][j+col]=xorchar;
			}
	
	}
}


sshifter::sshifter(int argc, char **argv){

	for(int i=1;i<argc;i++){
		grid.push_back(argv[i]);
	}
//	This function reads int the command line argumnets


}
void sshifter::read_shape(){
	//thsi function reads in the text file shapes using std in

	string shapbuff,placeholder;
	vector<string>shape;
	while(getline(cin, shapbuff)){
		stringstream ss(shapbuff);
		//ss.str(shapbuff);
		while(ss >> placeholder){
			
			shape.push_back(placeholder);
			placeholder.clear();
		}
		shapes.push_back(shape);
		ss.clear();
		shapbuff.clear();
		shape.resize(0);
	}
}

int main(int argc,char **argv){
//Checks for command line arguments
	if(argc == 0){
		cerr<<"No";return -1;
	}

	int ind=0;
	//call the constructor to read in arguments
	sshifter show(argc, argv);
	//read in the shape
	show.read_shape();
	show.findsolution(ind); // call function to find the solution
	show.print(); //This function prints the solution.

}


