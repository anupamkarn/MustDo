#include<bits/stdc++.h>

using namespace std;

//function for converting given binary tree int doubly linked list


int countnode=0;
Node* firstdllnode=NULL;
Node* previous=NULL;
void finalDLL(Node* root){
    countnode++;
    Node* dllnode = newNode(root->data);
    if(countnode==1){
        firstdllnode=dllnode;
        dllnode->left=NULL;
        previous = dllnode;
    }
    else{
    previous->right=dllnode;
    dllnode->left=previous;
    previous=dllnode;
    dllnode->right=NULL;
    }
}

void convert(Node* root){
   if(root){
    convert(root->left);
    finalDLL(root);
    convert(root->right);
   }
}
void BToDLL(Node *root, Node **head_ref)
{
    countnode=0;
    previous=NULL;
    firstdllnode=NULL;
    convert(root);
    *head_ref=firstdllnode;
    
}

int main(){

 return 0;
}

