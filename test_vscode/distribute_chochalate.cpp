#include<iostream>
#include<queue>
#include<vector>
#include<stack>
#include<map>

using namespace std;

struct TreeNode
{
    int data;
    TreeNode* left;
    TreeNode* right;
};

int moves=0;

void equalize(TreeNode* node){
    if(node==NULL) return;
    equalize(node->left);
    equalize(node->right);
    if(node->left->data==0){

    }
}

int main(){
    return 0;
}