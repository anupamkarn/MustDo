//Modified finding Diameter approach (applied new recursive traversal basically modified postorder traversal), pass root in function maxPathSum 
//(L2L) : leaf to leaf 

int maxi=INT_MIN;
int traverse(Node* root){
    if(root==NULL){
        return 0;
    }
    int l_sum = traverse(root->left);
    int r_sum = traverse(root->right);
    
    maxi = max(l_sum+r_sum+root->data,maxi);
    
    if(l_sum>r_sum) return l_sum+root->data;
    else return r_sum+root->data;
}
int maxPathSum(struct Node *root)
{
    maxi=INT_MIN;
    traverse(root);
    return maxi;
}
