//check if pair of nodes exist of given sum in BST

void inorder(node* root, vector<int> &v, bool* a){
    if(!root) return;
    inorder(root->left,v,a);
    v.push_back(root->val);
    a[root->val]=1;
    inorder(root->right,v,a);
}
bool isPairPresent(struct node *root, int target)
{
    bool a[1001]={0};
    vector<int> v;
    inorder(root,v,a);
    for(auto u:v){
        if(target-u>0){
            if(a[target-u]&&target-u!=u){
                //cout<<u<<" "<<target-u<<endl;
                return 1;
            }
        }
    }
    return 0;
}
