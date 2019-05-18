// lca in single traversal without using extra space

bool find(TreeNode* root, int val)
{
    if (!root)
        return false;
    if (root->val == val)
        return true;
    if ((root->left && find(root->left, val)) || 
        (root->right && find(root->right, val)))
        return true;
    return false;
}
TreeNode* lc(TreeNode* root,int a, int b){
    if(!root) return NULL;
    
    if(root->val==a||root->val==b) return root;
    
    TreeNode* l = lc(root->left,a,b);
    TreeNode* r = lc(root->right,a,b);
    
    if(l&&r){
        flag=1;
        return root;
    }    
    
    return (l)? l : r;
}
int Solution::lca(TreeNode* A, int B, int C) {
    flag=0;
    if (!find(A, B) || !find(A, C))
        return -1;
    TreeNode* node = lc(A,B,C);
    if(node) return node->val;
    else return -1;
}

