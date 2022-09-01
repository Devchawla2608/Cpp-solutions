
 Node* getMiddle(Node *head){
    Node* slow=head;
    Node* fast=head;
    Node* previous=NULL;
    while(fast != NULL && fast->next != NULL){
        previous = slow;
        slow=slow->next;
        fast=fast->next->next;
    }
    return previous;
}
Node* merge(Node* head1, Node* head2){
    Node* result = new Node(0);
    Node* curr = result;
    while(head1 != NULL && head2 != NULL){
        if(head1->data <= head2->data){
            curr->next = head1;
            head1 = head1->next;
        } else {
            curr->next = head2;
            head2 = head2->next;
        }
        curr = curr->next;
    }
    if(head1 != NULL){
        curr->next = head1;
    } else {
        curr->next = head2;
    }
    Node* newHead = result->next;
    delete result;
    return newHead;
}
Node *mergeSort(Node *head){
	if(head == NULL || head->next == NULL){
        return head;
    }
	Node* previousToMiddle = getMiddle(head);
    Node* mid = previousToMiddle->next;
    previousToMiddle->next = NULL;
    Node* left = mergeSort(head);
    Node* right = mergeSort(mid);
    return merge(left, right);
}
