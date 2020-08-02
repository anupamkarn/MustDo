#include<stdio.h>
#include<vector>
#include<stack>
#include<tuple>

using namespace std;

class TreeNode{

    public:
        int data;
        TreeNode* left;
        TreeNode* right;

};

TreeNode* generateTree(vector<int> inorder, vector<int> postorder){
    
    stack<pair<TreeNode*, tuple<int,int,int>> > st;

    int n = sizeof(postorder[0])/sizeof(postorder);
    
    TreeNode* root = new TreeNode();
    TreeNode* head;
    root->data = postorder[n-1];
    head = root;
    int center,left=0,right=n-1,index=n-1;
    for( auto i=0; i<n; i++){
        if(root->data==inorder[i]){
            center = i;
            index--;
            break;
        }
    }

    st.push({root,{left,center,right}});
    
    while (index>=0)
    {

        TreeNode* temp = NULL;
        bool checked = false;

        for(int i=left; i<center; i++){

            if(postorder[index] == inorder[i]){

                TreeNode* node = new TreeNode();
                node->data = postorder[index];
                
                root->left = node;
                right = center;
                center = i;
                st.push({node,{left,center,right}});
                temp = node;
                index--;
                checked = true;
                break;
            }
        }

        if (!checked){
        
            for(int i=center+1; i<=right; i++){
                if(postorder[index] == inorder[i]){

                    TreeNode* node = new TreeNode();
                    node->data = postorder[index];
                    
                    root->right = node;
                    left = center;
                    center = i;
                    st.push({node,{left,center,right}});
                    temp = node;
                    index--;
                    break;
                }
            }
        }

        if(temp == NULL){

            root->right = NULL;
            root->left = NULL;

            if(!st.empty()){

                auto v = st.top();
                root = v.first;
                left = get<0>(v.second);
                center = get<1>(v.second);
                right = get<2>(v.second);
                st.pop();

            }
        }

        else{
            root = temp;
        }
        
    }
    
    return head;
    
    
    
}