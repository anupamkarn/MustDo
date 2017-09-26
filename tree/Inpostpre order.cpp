#include<bits/stdc++.h>

using namespace std;

struct node{
 	int data;
 	struct node *left;
 	struct node *right;
 };
 
void printInOrder(node *root){
	if(root){
		printInOrder(root->left);
		cout<<root->data<<" ";
		printInOrder(root->right);

	}


	}
	
node *newnode(int data){
 	struct node *initnode = (struct node *)malloc(sizeof(node));
 	initnode->data=data;
 	initnode->left=initnode->right=NULL;

 	}	

int main(){
 
 
 struct node *root = (struct node *)malloc(sizeof(node));
 root=newnode(10);
 root->right=newnode(9);
 root->left=newnode(11);
 root->right->left=newnode(8);
 root->right->right=newnode(13);
 root->left->right=newnode(7);
 root->left->left=newnode(4);
 
 printInOrder(root);
 return 0;
}

