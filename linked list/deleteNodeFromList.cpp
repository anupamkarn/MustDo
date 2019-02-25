
//passing pointer of node to be deleted from linked list

void deleteNode(Node *node)
{
    Node *temp = node;
    node = node->next;
    while(node->next){
        temp->data = node->data;
        temp = node;
        node = node->next;
    }
    temp->data = node->data;
    temp->next = NULL;
    free(node);
}
