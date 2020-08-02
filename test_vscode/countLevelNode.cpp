#include<iostream>

using namespace std;

struct TreeNode
{
    int val;
    TreeNode* left;
    TreeNode* right;

};

void CountNode(TreeNode* root, int level, int current_height, int *count){
    
    if(root==NULL){
        return;
    }
    cout<<"Height of current node: "<<root->val<<" is: "<<current_height<<endl;
    if(current_height==level){
        *count++;
    }
    CountNode(root->left,level,current_height+1,count);
    CountNode(root->right,level,current_height+1,count);
    
    
}

int main(){
    TreeNode* root = new TreeNode();
    int finalCount =0;
    int level;
    cout<<"Enter the value of level for which you have to calculate number of heihgts: "<<endl;
    cin>>level;
    CountNode(root,level,0,&finalCount);
    cout<<"Number of node with level: "<<level<<" is "<<finalCount<<endl;

    return 0;
}