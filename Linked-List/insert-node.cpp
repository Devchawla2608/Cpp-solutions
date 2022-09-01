Node* insertNode(Node *head , int i ,int data){
    Node *newNode = new Node(data);
    Node *temp = head;
    int count = 0;
    if(i == 0){
        newNode->next = head;
        head = newNode;
          return head;
    }
    while(count< i-1 && temp !=NULL){
        temp = temp->next;
        count = count + 1;
    }
    
    if(temp!=NULL){
   newNode->next = temp->next;
    temp->next =  newNode;

}
  return head;
}