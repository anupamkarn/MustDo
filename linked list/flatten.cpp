// O(nlogn) approach by making a new list and pushed sorted elements in it, pass the head node of list to flatten function

multiset<int> ms;
void traverse(Node* root){
    if(root==NULL) return;
    ms.insert(root->data);
    traverse(root->bottom);
    traverse(root->next);
}
Node* newNode(int data){
    Node* temp = new Node();
    temp->data = data;
    temp->next = NULL;
    temp->bottom = NULL;
    return temp;
    
}
Node *flatten(Node *root)
{
    ms.clear();
    traverse(root);
    bool count=0;
    Node* head;
    Node* prev;
    Node* temp;
    // for(auto u:ms){
    //     cout<<u<<" ";
    // }
    // cout<<endl;
    for(auto u:ms){
        if(count==0){
            temp = newNode(u);
            head=temp;
            prev=temp;
            count=1;
        }
        else{
            temp = newNode(u);
            prev->bottom=temp;
            prev=temp;
        }    
    }
    return head;
}
