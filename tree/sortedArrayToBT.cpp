//Constructing BT from sorted array and then traversing preorder, can be done directly by straight preorder traversal.

#include<bits/stdc++.h>

using namespace std;

class BT{
  public:
    int data;
    BT* left;
    BT* right;
};

BT* newNode(int data){
    BT* temp = new BT();
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

void preorder(BT* root){
    if(!root) return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

BT* makeBT(int *a, int low, int high){
    if(low>high) return NULL;
    int mid = low+(high-low)/2;
    BT* left = makeBT(a,low,mid-1);
    BT* right = makeBT(a,mid+1,high);
    BT* root = newNode(a[mid]);
    root->left = left;
    root->right = right;
    return root;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        BT* head = makeBT(a,0,n-1);
        preorder(head);
        cout<<endl;
    }
    return 0;
}
