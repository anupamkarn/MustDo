bool check(Node* node1, Node* node2){
    bool flag1=0,flag2=0;
    if(node1->key==node2->key){
        flag1=1;flag2=1;
        if(node1->right&&node2->left)
            flag1 = check(node1->right,node2->left);
        if(node1->left&&node2->right)
            flag2 = check(node1->left,node2->right);
        return flag1&flag2;    
    }
    else return 0;
}
bool isSymmetric(struct Node* root)
{
    bool flag=0;
    if(root->left&&root->right){
        if(root->left->key==root->right->key){
            flag = check(root->left,root->right);
            if(flag) return 1;
            else return 0;
        }
        else{
            return 0;
        }
    }    
    else{
        return 0;
    } 
	// Code here
}
