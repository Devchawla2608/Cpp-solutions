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

int length(Node *head) {
    if(head == NULL){
        return 0;
    }
    int smallOutput = length(head->next);
    return smallOutput + 1;
}