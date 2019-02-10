void zigZagTraversal(Node* root)
{
    stack<Node*> s1;
    stack<Node*> s2;
    s1.push(root);
    cout<<root->data<<" ";
    vector<int> v;
    while(!s1.empty()||!s2.empty()){
        while(!s1.empty()){    
            Node* temp = s1.top();
            s1.pop();
            //cout<<temp->data<<" ";
            if(temp->right){
                cout<<temp->right->data<<" ";
                s2.push(temp->right);
            }
            if(temp->left){
                cout<<temp->left->data<<" ";
                s2.push(temp->left);
            }
        }
        while(!s2.empty()){
            Node* temp = s2.top();
            s2.pop();
            //cout<<temp->data<<" ";
            if(temp->left){
                cout<<temp->left->data<<" ";
                s1.push(temp->left);
            }
            if(temp->right){
                cout<<temp->right->data<<" ";            
                s1.push(temp->right);
            }
        }
    }
    cout<<endl;
	// Code here
}

