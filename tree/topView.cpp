//output will be sequence of node visible in top view rom left to right
//pass root node address

void traverse(Node *node, int a[], int i, int j){
    if(a[i+j]==0){
        a[i+j]=node->data;
    }
    if(node->left)
        traverse(node->left,a,i+j,-1);
    if(node->right)
        traverse(node->right,a,i+j,1);
}

void topView(struct Node *root)
{
    int a[200] = {0};
    int i=100;
    a[i]=root->data;
    cout<<a[i]<<" ";
    if(root->left){
        traverse(root->left,a,i,-1);
    }
    if(root->right){
        traverse(root->right,a,i,1);
    }
    for(int m=101,n=99; m<200 and n>=0; m++,n--){
        if(a[n])
            cout<<a[n]<<" ";
        if(a[m])
            cout<<a[m]<<" ";
    }
}
