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

Node *mergeTwoSortedLinkedLists(Node *head1, Node *head2)
{
    if(head1 == NULL && head2 ==NULL){
        return NULL;
    }
    if(head1 == NULL && head2 !=NULL){
        return head2;
    }
    if(head1 != NULL && head2 ==NULL){
        return head1;
    }
    Node *head = NULL;
    Node *tail = NULL;
    Node *temp1 = head1;
    Node *temp2 = head2;
    int store ;
    while(temp1!=NULL && temp2!=NULL){
        if(temp1->data < temp2->data){
            store = temp1->data;
            temp1 = temp1->next;
        } else{
            store = temp2->data;
            temp2 = temp2->next;
        }
        Node *newNode = new Node(store);
        if(tail == NULL){
            head = newNode;
            tail = newNode;
        }else{
            tail->next = newNode;
            tail = newNode;
        }
    }
    
    if(temp1 == NULL && temp2!=NULL){
        tail->next = temp2;
    }else{
        tail->next = temp1;
    }
    return head;
}