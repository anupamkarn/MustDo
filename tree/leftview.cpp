
#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};
void leftView(struct Node *root);
struct Node* newNode(int data)
{
  struct Node* node = (struct Node*)
                       malloc(sizeof(struct Node));
  node->data = data;
  node->left = NULL;
  node->right = NULL;
  return(node);
}

int main()
{
  int t;
  struct Node *child;
  scanf("%d
", &t);
  while (t--)
  {
     map<int, Node*> m;
     int n;
     scanf("%d
",&n);
     struct Node *root = NULL;
     while (n--)
     {
        Node *parent;
        char lr;
        int n1, n2;
        scanf("%d %d %c", &n1, &n2, &lr);
        if (m.find(n1) == m.end())
        {
           parent = newNode(n1);
           m[n1] = parent;
           if (root == NULL)
             root = parent;
        }
        else
           parent = m[n1];
        child = newNode(n2);
        if (lr == 'L')
          parent->left = child;
        else
          parent->right = child;
        m[n2]  = child;
     }
     leftView(root);
     cout << endl;
  }
  return 0;
}

}


int vis[1001]={0};
int depth[1001]={0};
int k=0;
void findDepth(Node *root){
    if(root->left){
        k++;
        depth[root->left->data]=k;
        findDepth(root->left);
        k--;
    }
    if(root->right){
        if(root->left){
            depth[root->right->data]=depth[root->left->data];
            k++;
            findDepth(root->right);
            k--;
        }
        else{
            k++;
            depth[root->right->data]=k;
            findDepth(root->right);
            k--;
        }
    }

}
int maxi=INT_MIN;
void print(Node *root){
    if(root){
        if(maxi<depth[root->data]){
            cout<<root->data<<" ";
            maxi=depth[root->data];
        }
        print(root->left);
        print(root->right);
    }
}

void leftView(Node *root)
{
    depth[1001]={0};
    maxi=INT_MIN;
    k=0;
    if(root==NULL)
    return ;
    depth[root->data]=0;
    findDepth(root);
    print(root);
    // cout<<endl;
    // for(int i=1; i<=6; i++)
    // cout<<depth[i]<<" ";
    // Your code here
}
