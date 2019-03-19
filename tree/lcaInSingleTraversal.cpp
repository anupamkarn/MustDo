//lca in single traversal "preorder" pass root node ot LCA function

Node* lca = NULL;
bool flag1=0,flag2=0;
int mini =INT_MAX,m1,m2;
stack<Node *> s;

void traverse(Node *node){
    
    if(flag1&&flag2) return;
    
    s.push(node);
    if(node->data==m1){
        flag1=1;
        if(s.size()<mini){
            mini = s.size();
            lca = s.top();
        }
    }
    else if(node->data==m2){
        flag2=1;
        if(s.size()<mini){
            mini = s.size();
            lca = s.top();
        }
    }
    if(node->left){
        traverse(node->left);
        if(flag1||flag2){
            if(flag1&&flag2) return;
            if(s.size()<mini){
                //cout<<"a"<<endl;
                mini = s.size();
                lca = s.top();
            }
        }
    }    
    if(node->right){
        traverse(node->right);
        if(flag1||flag2){
            if(flag1&&flag2) return;
            if(s.size()<mini){
                //cout<<"b"<<endl;
                mini = s.size();
                lca = s.top();
            }
        }
    }
    s.pop();
}

Node * LCA(Node* root ,int n1 ,int n2 )
{
   if(root->data==n1||root->data==n2) return root;
   if(n1==n2) {
       Node * k = new Node();
       k->data = n1;
       k->left = k->right = NULL;
       return k;
   }
   lca = root;
   m1=n1;m2=n2;flag2=0;flag1=0;mini=INT_MAX;
   s=stack<Node *>();
   traverse(root);
   return lca;
}
