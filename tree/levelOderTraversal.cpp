// pass the root node of tree


void levelOrder(Node* node)
{
    queue<Node*> q;
    vector<int> v;
    q.push(node);
    v.push_back(node->data);
    while(!q.empty()){
        Node* temp = q.front();
        q.pop();
        if(temp->left){
            q.push(temp->left);
            v.push_back(temp->left->data);
        }
        if(temp->right){
            q.push(temp->right);
            v.push_back(temp->right->data);
        }
    }
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
  //Your code here
}

