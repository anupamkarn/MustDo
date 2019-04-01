//Reorder linked list using recursion and inorder appoach, first time used pointer to pointer in linked list :P! pass head pointer to reorderlist function

void reverse(Node** a, Node* b){
    if(b==NULL){
        return;
    }
    reverse(a,b->next);
    //cout<<(*a)->data<<endl;
    Node* t1 = (*a)->next;
    (*a)->next = b;
    b->next = t1;
    *a = t1;
}

void reorderList(Node* head) 
{
    Node* temp = head;
    int n=0;
    while(temp->next!=NULL){
        temp= temp->next;
        n++;
    }
    n++;
    if(n==1||n==2) return;
    if(n==3){
        Node* t1 = head->next;
        head->next = head->next->next;
        head->next->next = t1;
        t1->next =NULL;
        return;
    }
    int count=1;
    temp=head;
    while(count!=(n/2)+1){
        temp = temp->next;
        count++;
    }
    Node* b = temp->next;
    temp->next=NULL;
    reverse(&head,b);
    
}
