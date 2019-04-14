//Recovering BST after swap of two nodes data, inorder appoach using 3 global variables

node* node1=NULL;
node* node2=NULL;
node* temp=NULL;
void traverse(node* root){
    if(!root) return;
    traverse(root->left);
    if(temp==NULL) temp=root;
    else{
        if(root->data<temp->data){
            if(!node1){
                node1=temp;
            }
            else if(!node2){
                node2=root;
            }
        }
        temp=root;
    }
    traverse(root->right);
}
struct node *correctBST( struct node* root )
{   
    node1=NULL;node2=NULL;temp=NULL;
    traverse(root);
    int x=node1->data;
    node1->data=node2->data;
    node2->data=x;
    return root;
}
