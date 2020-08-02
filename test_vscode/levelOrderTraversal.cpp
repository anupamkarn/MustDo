#include<iostream>
#include<queue>

using namespace std;

struct TreeNode
{
    int val;
    TreeNode* left;
    TreeNode* right;

};

void levelOrder(TreeNode* root){
    //starting of BFS code
    queue<TreeNode*> q;
    q.push(root);

    while(!q.empty()){
        TreeNode *temp = q.front();
        q.pop();
        if(temp==NULL) continue;
        cout<<temp->val<<" ";
        q.push(temp->left);
        q.push(temp->right);
    }
    //Ending of BFS code
}

int main(){
    TreeNode * node = new TreeNode();
    levelOrder(node);
    return 0;
}