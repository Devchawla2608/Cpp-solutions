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

Node *deleteNodeRec(Node *head, int pos) {
	if(head == NULL){
        return head;
    }
    if(pos == 0){
        Node* save = head->next;
        delete head;
        return save;
    }
    Node *smallOutput = deleteNodeRec(head->next, pos-1);
    head->next = smallOutput;
}