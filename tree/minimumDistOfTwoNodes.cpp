//Minimum distance between given two nodes in tree, LCA approach. pass Root node to findDist function

Node* lca(Node* root,int a, int b){
    if(!root) return NULL;
    
    if(root->data==a||root->data==b) return root;
    
    Node* l = lca(root->left,a,b);
    Node* r = lca(root->right,a,b);
    
    if(l&&r) return root;
    
    return (l)? l : r;
}
int Distance(Node* node, int a){
    if(!node) return 0;
    if(node->data==a){
        return 1;
    }
    int l = Distance(node->left,a);
    int r = Distance(node->right,a);
    if(!l&&!r) return 0;
    return (l) ? l+1 : r+1;
}
int findDist(Node* root, int a, int b)
{
    Node* LCA = lca(root,a,b);
    return Distance(LCA,a)+Distance(LCA,b)-2;
}
