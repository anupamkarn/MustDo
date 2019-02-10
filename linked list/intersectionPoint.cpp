#include<bits/stdc++.h>

using namespace std;

int main(){

 return 0;
}

int intersectPoint(Node* head1, Node* head2)
{
    //int hash[1001]={0};
    //memset(hash, 0, sizeof(hash));
    Node* root1=head1;
    Node* root2=head2;
    int count1=0,count2=0;
    while(root1->next!=NULL){
         //hash[root1->data]=1;
         root1=root1->next;
         count1++;
    }
    //hash[root1->data]=1;
    while(root2->next!=NULL){
            //hash[root2->data]=1;
            root2=root2->next;
            count2++;
    }
    root1=head1;
    root2=head2;
    if(count1==count2){
        for(int i=1; i<count1; i++){
            if(root1==root2){
                return root1->data;
            }
            root1=root1->next;
            root2=root2->next;
        }
    }
    else{
        int x=abs(count1-count2);
        if(count1>count2){
            for(int i=1; i<=x; i++){
                root1=root1->next;
            }
            x=count2;
        }
        else{
            for(int i=1; i<=x; i++){
                root2=root2->next;
            }
            x=count2;
        }
        for(int i=1; i<x; i++){
            if(root1==root2){
                return root1->data;
            }
            root1=root1->next;
            root2=root2->next;
        }
    }
    return -1;
    // Your Code Here
}
