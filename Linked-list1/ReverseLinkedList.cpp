Node *reverseLinkedListRec(Node *head)
{
    // pr p = reverseLinkedListRec2(head);
    // return p.head;
    
    if(head == NULL){
        return head;
    }
    if(head->next == NULL){
        return head;
    }
    Node *smallOutput = reverseLinkedListRec(head->next);
    Node *save = head->next;
    save->next = head;
    head->next = NULL;
    return smallOutput;
    
}