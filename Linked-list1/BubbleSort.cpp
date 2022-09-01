/****************************************************************
 
    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

*****************************************************************/

 int length(Node* head){
    int count=0;
    Node* curr = head;
    while(curr != NULL){
        curr=curr->next;
        count++;
    }
    return count;
}
Node *bubbleSort(Node *head){
    int len = length(head);
    for(int i=0; i<len; i++){
        Node* previous=NULL;
        Node* curr=head;
        Node* next=NULL;
        while(curr != NULL && curr->next != NULL){
            next = curr->next;
            if(curr->data <= next->data){
                previous = curr;
                curr = curr->next;
            } else {
                if(previous == NULL){
                    head = next;
                }else {
                    previous->next = next;
                }
                curr->next=next->next;
                next->next=curr;
                if(previous == NULL){
                    previous = head;
                }else {
                    previous = previous->next;
                }
            }
        }
    }
    return head;
}