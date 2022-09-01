Node* insertNodeRecursivly(Node *head , int i ,int data){
    if(head == NULL){
        return head;
    }
    if(i == 0){
        Node *newNode = new Node(data);
        newNode->next = head;
        head = newNode;
        return head;
    }
    Node *smallOutput =  insertNodeRecursivly(head->next , i - 1 , data);
    head->next = smallOutput;
    return head;
}
