  Node* reverseList(Node* head) {
        if(head == NULL || head->next == NULL){
            return head;
        }
    Node *smallOutput = reverseList(head->next);
        head->next->next = head;
        head->next = NULL;
        return smallOutput;
    }

bool isPalindrome(Node *head)
{
   
  Node *newHead = newSameList(head);
  newHead =  reverseList(newHead);
  Node *temp1 = newHead;
  Node *temp2 = head;
  while(temp1!=NULL){
      if(temp1->data != temp2->data){
          return false;
      }
      temp1 = temp1->next;
      temp2 = temp2->next;
  }
  return true;
}