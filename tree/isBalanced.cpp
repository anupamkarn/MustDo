//checking is BT is balanced or not recursively, complexity O(n^2), pass root node pointer in isBalanced function

int height(Node* root){
    if(root==NULL){
        return 0;
    }
    int l = height(root->left);
    int r = height(root->right);
    
    return max(l,r)+1;
}
bool isBalanced(Node *root)
{
    if(root==NULL) return 1;
    
    int lh = height(root->left);
    int rh = height(root->right);
    
    bool l = isBalanced(root->left);
    bool r = isBalanced(root->right);
    
    if(abs(lh-rh)<=1&&l&r) return 1;
    else return 0;
    
}
