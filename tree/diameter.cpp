//Diameter of binary tree using recursive approach, pass the root node of tree to diameter function

int maxi=0;
int calD(Node* root){
    if(root==NULL){
        return 0;
    }
    int l = calD(root->left);
    int r = calD(root->right);
    
    maxi = max(l+r+1,maxi);
    
    if(l>r) return l+1;
    else return r+1;
}
int diameter(Node* node)
{
   maxi=0;
   calD(node);
   return maxi;
}
