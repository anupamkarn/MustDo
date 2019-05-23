//Rotating list by k 

ListNode* Solution::rotateRight(ListNode* A, int B) {
    int l=0;
    ListNode* head = A;
    ListNode* second;
    while(A!=NULL){
        l++;
        second=A;
        A=A->next;
    }
    int b = B%l;
    if(b==0) return head;
    int count=1;
    ListNode* first=head;
    while(count!=l-b){
        first=first->next;
        count++;
    }
    ListNode* temp = first->next;
    second->next=head;
    first->next=NULL;
    return temp;
}
