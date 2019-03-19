// No extra space used for resulting linked list, pass the head nodes of both linked list

Node*  addTwoLists(Node* first, Node* second){
    bool flag1=0,flag2=0,carry=0;
    int x;
    Node* f = first;
    Node* s = second;
    while(f->next&&s->next){
        x = f->data + s->data + carry;
        if(x>=10){ 
            carry=1;
            f->data = x-10;
            s->data = x-10;
        }
        else{
            f->data = x;
            s->data = x;
            carry=0;
        }
        f = f->next;
        s = s->next;
    } 
    if(!f->next&&!s->next){
        x = f->data + s->data + carry;
        if(x>=10){ 
            carry=1;
            f->data = x-10;
            Node* last = new Node();
            last->data = 1;
            last->next = NULL;
            f->next = last;
        }
        else{
            f->data = x;
        }
        return first;
    }
    else if(!f->next){
        x = f->data + s->data + carry;
        //cout<<f->data<<" "<<s->data<<" "<<carry<<" "<<x<<endl;
        if(x>=10){ 
            carry=1;
            s->data = x-10;
            s = s->next;
            while(s->next){
                x = s->data + carry;
                if(x==10) {s->data=0; carry=1;}
                else {s->data = x; carry=0;}
                s = s->next;
            }
            if(carry){
                x = s->data +1;
                if(x==10){
                   s->data = 0;
                   Node* last = new Node();
                   last->data = 1;
                   last->next = NULL;
                   s->next = last; 
                }
                else{
                    s->data = x;
                }
            }
        }
        else{
            s->data = x;
        }
        return second;
    }
    else{
        x = f->data + s->data + carry;
        if(x>=10){ 
            carry=1;
            f->data = x-10;
            f = f->next;
            while(f->next){
                x = f->data + carry;
                if(x==10){ f->data=0; carry=1;}
                else{ f->data = x; carry=0;}
                f = f->next;
            }
            if(carry){
                x = f->data +1;
                if(x==10){
                   f->data = 0;
                   Node* last = new Node();
                   last->data = 1;
                   last->next = NULL;
                   f->next = last; 
                }
                else{
                    f->data = x;
                }
            }
        }
        else{
            f->data = x;
        }
        return first;
    }
}
