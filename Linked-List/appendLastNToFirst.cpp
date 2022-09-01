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

Node *appendLastNToFirst(Node *head, int n)
{
    if(head == NULL){
        return head;
    }
	int length = 0;
    Node* temp = head;
    while(temp!=NULL){
        length++;
        temp = temp->next;
    }
    int count = 1;
    temp = head;
    Node* save = NULL;
    Node* tail = NULL;
    while(temp!=NULL){
        if(count == length-n){
            save = temp;
        }
        if(temp->next == NULL){
            tail = temp;
            break;
        }
        temp = temp->next;
        count++;
    }
    
    temp->next = head;
    head = save->next;
    save->next = NULL;
    return head;
    
}