#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int count=0;
    bool flag=0;
    while(node->next!=NULL){
    
        if(count>300){
            flag=1;
            break;
        }
        count++;
        Node *p = node;
        node = node->next;
    }
    if(flag){
        p->next=NULL;
    }
    

 return 0;
}

