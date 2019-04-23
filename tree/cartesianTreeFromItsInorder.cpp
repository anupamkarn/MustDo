//generating cartesian tree(Max heap tree) from its inorder traversal

TreeNode* constTree(TreeNode* root, vector<int> &v,int left, int right){
    if(left>right) return NULL;
    int maxi=INT_MIN,j;
    for(int i=left; i<=right; i++){
        if(maxi<v[i]){
            maxi=v[i];
            j=i;
        }
    }
    TreeNode* node = new TreeNode(v[j]);
    node->left = constTree(node,v,left,j-1);
    node->right = constTree(node,v,j+1,right);
    return node;
} 
TreeNode* Solution::buildTree(vector<int> &A) {
    int maxi=INT_MIN,j;
    int n=A.size();
    for(int i=0; i<n; i++){
        if(A[i]>maxi){ 
            maxi=A[i];
            j=i;
        }    
    }
    TreeNode* root = new TreeNode(maxi);
    root->left = constTree(root,A,0,j-1);
    root->right = constTree(root,A,j+1,n-1);
    return root;
    
}
