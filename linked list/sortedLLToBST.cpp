//Convert sorted linked list to BST using preorder type traversal, pass the head of linked to sortedListToBST function

TreeNode* sortedListToBST(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* prev;
        if(!head) return NULL;
        if(head->next==NULL){
            TreeNode * root = new TreeNode(slow->val);
            return root;    
        } 
        while(fast&&fast->next){
            fast=fast->next->next;
            prev= slow;
            slow=slow->next;
        }
        prev->next=NULL;
        TreeNode * root = new TreeNode(slow->val);
        root->left = sortedListToBST(head);
        root->right = sortedListToBST(slow->next);
        
        return root;
}
