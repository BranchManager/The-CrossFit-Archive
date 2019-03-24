//Noah Branch Lab 10
//Lab A
//This lab inserts nodes into a BSTree and does a number functions to them
//Some tof the functions include printing in certain orders
//checking if its an AVL tree 
//finding the depth of the tree and rotating about a node

#include <iostream>
#include <vector>
#include <cstdlib>
#include <cstdio>
#include "laba.h"
using namespace std;

BSTree::BSTree()
{
	sentinel = new BSTNode;
	sentinel->parent = NULL;
	sentinel->left = NULL;
	sentinel->right = sentinel;
	size = 0;
}

BSTree::~BSTree()
{
	recursive_destroy(sentinel->right);
	delete sentinel;
}

int BSTree::Insert(string s, void *val)
{
	BSTNode *parent;
	BSTNode *n;

	parent = sentinel;
	n = sentinel->right;

	while (n != sentinel) {
		if (n->key == s) return 0;
		parent = n;
		if (s < n->key) {
			n = n->left;
		} else {
			n = n->right;
		}
	}

	n = new BSTNode;
	n->key = s;
	n->val = val;
	n->parent = parent;
	n->left = sentinel;
	n->right = sentinel;
	if (parent == sentinel) {
		sentinel->right = n;
	} else if (s < parent->key) {
		parent->left = n;
	} else {
		parent->right = n;
	}
	size++;
	return 1;
}

void *BSTree::Find(string s)
{
	BSTNode *n;

	n = sentinel->right;
	while (1) {
		if (n == sentinel) return NULL;
		if (s == n->key) return n->val;
		if (s < n->key) {
			n = n->left;
		} else {
			n = n->right;
		}
	}
}

int BSTree::Delete(string s)
{
	BSTNode *n, *parent, *mlc;
	string tmpkey;
	void *tmpval;

	n = sentinel->right;
	while (n != sentinel && s != n->key) {
		if (s < n->key) {
			n = n->left;
		} else {
			n = n->right;
		}
	}
	if (n == sentinel) return 0;

	parent = n->parent;
	if (n->left == sentinel) {
		if (n == parent->left) {
			parent->left = n->right;
		} else {
			parent->right = n->right;
		}
		if (n->right != sentinel) n->right->parent = parent;
		delete n;
		size--;
	} else if (n->right == sentinel) {
		if (n == parent->left) {
			parent->left = n->left;
		} else {
			parent->right = n->left;
		}
		n->left->parent = parent;
		delete n;
		size--;
	} else {
		for (mlc = n->left; mlc->right != sentinel; mlc = mlc->right) ;
		tmpkey = mlc->key;
		tmpval = mlc->val;
		Delete(tmpkey);
		n->key = tmpkey;
		n->val = tmpval;
	}
	return 1;
}

vector <void *>BSTree::Sorted_Vector()
{
	array.clear();
	recursive_make_vector(sentinel->right);
	return array;
}

void BSTree::Print()
{
	recursive_inorder_print(0, sentinel->right);
}

int BSTree::Size()
{
	return size;
}

int BSTree::Empty()
{
	return (size == 0);
}




void BSTree::Postorder(){ //calls the function to print the function in postorder
	recursive_postorder(0, sentinel->right);
}


void BSTree::Preorder(){ //calls the function to print in pre order
	recursive_preorder(0, sentinel->right);
}

int BSTree::Depth(string key){  //this function prints the depth of the node
	int count = 0;

	BSTNode *n;
	n=sentinel->right;


	while(1){ //While true and the last node does not point to the sentinel it increments the count until it finds the node
		if(n== sentinel) return -1;
		if(key == n->key) return count;

		if(key < n->key){
			n=n->left;
		}else{
			n=n->right;
		}
		count++;
	}
}

int BSTree::Height(){ //This calls the function to get the heught of the tree.
	recursive_height(sentinel->right);
}

int BSTree::IsAVL(){  //this function checks if it is an avl tree
	if(recursive_height_and_avl_check(sentinel->right) == -2){
		return 0;
	}else{
		return -1;

	}
}

int BSTree::Rotate(string key){
//This function rotates about the node passed in the function.

	BSTNode *t, *l, *r,*p;//set mey temporary node pointers
	p=sentinel;//set p equal to sentinel

	if(!Find(key) || key==sentinel->right->key)//if key isnt in the tree or the key is equal to sentinels key return 0
	{
		return 0;
	}
	while(p->key!=key)
	{
		if(key>p->key)
		{
			p=p->right;
		}
		else
		{
			p=p->left;
		}

	}
	//This while loop basically finds the node that we need to rotate and puts it into p
	//Below we basically rotate the given node to the right spot and if there are any strangling nodes 
	//we attach them to the appropraite node
	
	t=p->parent; 
	l=p->left;
	r=p->right;
	if(t->parent->right->key==t->key)
	{
		t->parent->right=p;
		p->parent=t->parent;
	}
	else
	{
		t->parent->left=p;
		p->parent=t->parent;
	}
	if(p->key==t->left->key) 
	{
		if(r->key!=sentinel->right->key)
		{
			r->parent=t;
			t->left=r;
		}

		p->right=t;
		t->parent=p;

	}
	else
	{
		if(l->key!=sentinel->right->key)
		{
			l->parent=t;
			t->right=l;

		}
		p->left=t;
		t->parent=p;
	}

	return 1;
}



void BSTree::recursive_preorder(int level, BSTNode *n){

	if(n ==  sentinel){
		return;
	}
//This function prints all the left nodes then once it reaces the end of the left 
//side of the tree it see if there is a right side and print that node.
	printf("%*s%s\n",level, "", n->key.c_str());
	recursive_preorder(level+2, n->left);
	recursive_preorder(level+2, n->right);

}


void BSTree::recursive_postorder(int level, BSTNode *n){

	if(n == sentinel){
		return;
	}
//This function basically does the opposite of the preorder function printing all the right nodes first.
	recursive_postorder(level+2, n-> left);
	recursive_postorder(level+2, n->right);
	printf("%*s%s\n", level, "", n->key.c_str());

}

void BSTree::recursive_inorder_print(int level, BSTNode *n){
//The title of the function explains it all. it prints the nodes based on the order they are int the tree.
	if(n == sentinel){
		return;
	}

	recursive_inorder_print(level+2, n->right);

	printf("%*s%s\n", level, "", n->key.c_str());
	recursive_inorder_print(level+2, n->left);

}

void BSTree::recursive_make_vector(BSTNode *n)
{
	if (n == sentinel){
		return;
	}

	recursive_make_vector(n->left);
	array.push_back(n->val);
	recursive_make_vector(n->right);
}


void BSTree::recursive_destroy(BSTNode *n){

	if (n == sentinel){
		return;
	}
	recursive_destroy(n->left);
	recursive_destroy(n->right);
	delete n;

}


int BSTree::recursive_height(BSTNode *n){
	if(sentinel->right == sentinel){
		return -1;

	}

	if(n->right == sentinel && n->left == sentinel ){
		return 0;
//This function uses recurion to check the height of the tree
//it incriments as it goes through each level
	}
	else if(n->right == sentinel){
		return recursive_height(n->left) + 1;
	}

	else if (n->left == sentinel){
		return recursive_height(n->right) +1 ;

	}

	if(recursive_height(n->left) >= recursive_height(n->right)){
		return recursive_height(n->left)+1;
	}

	else{
		return recursive_height(n->right)+1;

	}

}



int BSTree::recursive_height_and_avl_check(BSTNode *n){
//This function checks if it is an AVL tree
	if(n == sentinel){
		return -1;

	}	
	int l, r;

	l = recursive_height_and_avl_check(n->left);
	r = recursive_height_and_avl_check(n->right);

	if(l == -2 || r == -2){
		return -2;

	}

	if(l-r > 1){
		return -2;
	}

	else if (r-l > 1 ){
		return -2;
	}

	if(r>l){ 
		return r+1;
	}

	else{
		return l+1;

	}
}

