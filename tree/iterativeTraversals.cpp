//Iterative tree traversal (Postorder), can be changed to any traversal just place line 23 before 17 for preorder, after line 19 for inorder

vector<int> postorderTraversal(TreeNode* A) {
    unordered_map<TreeNode* ,int> ump;
    stack<TreeNode*> s;
    vector<int> final;
    s.push(A);
    while(!s.empty()){
        TreeNode* node = s.top();
        if(node==NULL){
            s.pop();
            continue;
        }
        if(ump.find(node)==ump.end()){
            ump[node]=0;    
        }
        if(ump[node]==0){
            s.push(node->left);
        }
        else if(ump[node]==1){
            s.push(node->right);
        }
        else{
            final.push_back(node->val);
            s.pop();
        }
        ump[node]++;
    }
    return final;
}

