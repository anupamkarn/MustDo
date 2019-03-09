//root node of tree is being passed in the function 

int traverse(Node *node){
    if(!node) return 0;
    if(!node->left&&!node->right){
        int x = node->data;
        node->data = 0;
        return x;
    }
    int a = traverse(node->left);
    int b = traverse(node->right);
    int s = node->data;
    node->data = a+b;
    return s+a+b;
}

void toSumTree(Node *node)
{
    traverse(node);
}

