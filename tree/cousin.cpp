// Call isCousins function with root node address along with x and y values for which you have to check the whether they are cousin nodes or not

int left_height=0;
    int right_height=0;
    bool check_child(TreeNode* node,int x, int y){
        if(node->left->val==x&&node->right->val==y){
            return 1;
        }
        if(node->left->val==y&&node->right->val==x){
            return 1;
        }
        else return 0;
    }
    void height(TreeNode* node, int x, int y, int h, int *check){
        if(node==NULL||*check==1){
            return;
        }
        if(node->left&&node->right){
            *check = check_child(node,x,y);
            if(*check==1){
                return;
            }
        }
        if(node->val==x){
            left_height=h;
        }
        if(node->val==y){
            right_height=h;
        }
        height(node->left,x,y,h+1,check);
        height(node->right,x,y,h+1,check);
    }
    bool isCousins(TreeNode* root, int x, int y) {
        left_height=0;
        right_height=0;
        int check=0;
        height(root,x,y,0,&check);
        if(left_height==right_height&&left_height!=0){
            return true;
        }
        else{
            return false;
        }
        
    }
