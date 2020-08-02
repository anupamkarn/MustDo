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

void iterativePreorder(TreeNode* root){
    stack< map<int, TreeNode*> > s;
    map<int, TreeNode* > mp;
    mp.insert({-1,root->left});
    mp.insert({0,root});
    mp.insert({1,root->right});
    s.push(mp);

    while(!s.empty()){
        map<int, TreeNode* > m;        
        m = s.top();
        s.pop();
        if(m[0]==NULL) continue;
        cout<<m[0]->data<<" ";
        if(m[-1]!=NULL){
            map<int, TreeNode* > m2;
            m2.insert({-1,m[-1]->left});
            m2.insert({0,m[-1]});
            m2.insert({1,m[-1]->right});
            s.push(m2);
        }
        if(m[1]!=NULL){
            map<int, TreeNode* > m2;
            m2.insert({-1,m[1]->left});
            m2.insert({0,m[1]});
            m2.insert({1,m[1]->right});
            s.push(m2);
        }
    }
}

int main(){

    

    return 0;
}