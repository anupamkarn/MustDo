//vertical order print in Binary tree using recursion and map STl in a unique way, pass root to function verticalOrder 

map<int,vector<int> > m;
void traverse(int count,Node* root){
    if(root==NULL) return;
    m[count].push_back(root->data);
    traverse(count-1,root->left);
    traverse(count+1,root->right);
}
void verticalOrder(Node *root)
{
    m.clear();
    traverse(0,root);
    for(auto u:m){
        for(auto v:u.second){
            cout<<v<<" ";
        }
    }
}
