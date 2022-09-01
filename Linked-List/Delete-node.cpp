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
 Node *deleteNode(Node *head, int pos){
    Node* temp = head;
    if(head == NULL)
	return NULL; 
    if(pos == 0){
        head = head->next;
        delete temp;
        return head;
    }
    int i=0;
    while(temp != NULL && i < pos-1){
        temp = temp->next;
        i++;
    }
    if(temp != NULL && temp->next != NULL){
        Node* nodeToDelete = temp->next;
        temp->next = nodeToDelete->next;
        delete nodeToDelete;
    }
    return head;
}