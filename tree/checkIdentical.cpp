//check two given tree are identical or not, recursive approach in singal function

bool isIdentical(Node *r1, Node *r2)
{
    if(r1==NULL&&r2==NULL){
        return 1;
    }
    if(r1==NULL||r2==NULL){
        return 0;
    }
    bool l = isIdentical(r1->left,r2->left);
    bool r = isIdentical(r1->right,r2->right);
    
    if(l&r && r1->data==r2->data) return 1;
    else return 0;
    
}
