#include<bits/stdc++.h>

using namespace std;
struct node{
	int data;
	node *left; 
	node *right;
};

node *newnode(int data){
	node *root = (struct node*)malloc(sizeof(node));
	root->data=data;
	root->left=root->right=NULL;
	return root;
}

node *insert(node *root, int data){
	if(!root)
	root = newnode(data);
	
	else if(data <= root->data){
		insert(root->left, data);
	}
	
    else if(data >= root->data){
		insert(root->right, data);
	}
	
	return root;
}

void print(node *root){
	if(root){
	print(root->left);
	cout<<root->data<<" ";
	print(root->right);
	}
}
    
int main(){

 node *root = NULL;
 root = insert(root,15);
 root = insert(root,10);
 root = insert(root,20);
 root = insert(root,25);
 
 print(root);

 return 0;
}

