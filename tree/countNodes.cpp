//recursive approach to count number of nodes in tree

int getSize(Node* node)
{
   if(node==NULL){
       return 0;
   }
   
   int lsum = getSize(node->left);
   int rsum = getSize(node->right);
   
   return lsum+rsum+1;
}
