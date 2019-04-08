//maximum absolute difference of two nodes A and B(A-B), where A is ansestor of B
int s=0;
void cal(Node* root, int maxi, int mini){
    if(root==NULL) return;
    if(root->data>maxi){
        maxi = root->data;
        mini=1000;
    }
    else if(root->data<mini&&maxi>1) mini = root->data;
    if(maxi-mini>s&&mini!=1000) s = maxi-mini;
    cal(root->left,maxi,mini);
    cal(root->right,maxi,mini);
}
int maxDiff(Node* root)
{   
    s=0;
    cal(root,1,1000);
    if(s==0) return -1;
    else return s;
}
