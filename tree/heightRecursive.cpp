//recursive approach to find height

int height(Node* node)
{
   if(node==NULL){
       return 0;
   }
   
   int lheight = height(node->left);
   int rheight = height(node->right);
   
   return max(lheight,rheight)+1;

}
