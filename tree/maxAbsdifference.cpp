//maximum absolute difference of two nodes A and B where one is ansestor of other

int s=0;
void cal(Node* root, int maxi, int mini){
    if(root==NULL) return;
    if(root->data>maxi) maxi = root->data;
    else if(root->data<mini) mini = root->data;
    if(maxi-mini>s) s = maxi-mini;
    cal(root->left,maxi,mini);
    cal(root->right,maxi,mini);
}
int maxDiff(Node* root)
{   
    s=0;
    cal(root,root->data,root->data);
    return s;
}
