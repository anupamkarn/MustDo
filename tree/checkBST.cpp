#include<bits/stdc++.h>

using namespace std;



//funtions for checking BST, isBST is called first on the given bst;

bool flag;
int lefthead,righthead;

bool leftcheck(Node* root){
    if(root->left&&flag){
            if(root->left->data<root->data){
                lefthead = root->data;
                leftcheck(root->left);
            }
            else{
                flag=0;
                return 0;
            }
    }
    if(root->right&&flag){
            if((root->right->data>root->data)&&(root->right->data<lefthead)){
                leftcheck(root->right);
            }
            else{
                flag=0;
                return 0;
            }
    }
    lefthead=root->data;
    if(flag)
    return 1;
}

bool rightcheck(Node* root){
    if(root->left&&flag){
            if(root->left->data<root->data&&root->left->data>righthead){
                rightcheck(root->left);
            }
            else{
                flag=0;
                return 0;
            }
    }
    if(root->right&&flag){
            if(root->right->data>root->data){
                righthead=root->data;
                rightcheck(root->right);
            }
            else{
                flag=0;
                return 0;
            }
    }
    righthead=root->data;
    if(flag)
    return 1;
}

void print(int x,int y){
    cout<<x<<" "<<y<<endl;
}

bool isBST(Node* root) {
    
    if(!root)
    return 1;
    else{
        flag=1;
        int leftval=1,rightval=1;
        if(root->left&&root->right){
            if(root->left->data<root->data&&root->right->data>root->data)
                goto lable;
            else
                return 0;
        }
        lable:;
        if(root->left){
            lefthead = root->data;
            leftval = leftcheck(root->left);
        }
        if(root->right){
            righthead = root->data;
            rightval = rightcheck(root->right);
        }
        //print(leftval,rightval);
        if(leftval&&rightval)
        return 1;
        else
        return 0;
    }
    
    // Your code here
}
int main(){

 return 0;
}
