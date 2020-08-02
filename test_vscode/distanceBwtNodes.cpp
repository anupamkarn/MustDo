#include<iostream>
#include<queue>
#include<vector>

using namespace std;

struct TreeNode
{
    int data;
    TreeNode* left;
    TreeNode* right;
};

int traverse(TreeNode* root){
    queue<TreeNode*> q;
    TreeNode* temp = new TreeNode();
    temp->data = -1;
    temp->left = temp->right = NULL;
    q.push(temp);
    q.push(root);
    int count =0;
    vector<int> v;
    while(!q.empty()){
        TreeNode* temp2 = q.front();
        q.pop();
        if(temp2->data==-1&&q.size()!=0){
            q.push(temp);
            v.push_back(-1);
            count++;
            continue;
        }
        else if(temp2->data!=-1){
            if(temp2->left) q.push(temp2->left);
            if(temp2->right) q.push(temp2->right);
            v.push_back(temp2->data);
        }
    }
    int count_2=0;
    for(int i=0; i<v.size(); i++){
        if(count_2==count){
            return v[i];
        }
        if(v[i]==-1){
            count_2++;
        }
    }
}

int main(){

    TreeNode * node = new TreeNode();
    
    return 0;

}