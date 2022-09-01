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

Node *swapNodes(Node *head, int i, int j)
{
    if(head == NULL){
        return head;
    }
    
    
    
	Node *temp = head;
    Node *save1 =NULL;
    Node *save2 = NULL;
    Node *n1 =NULL;
    Node *n2 = NULL;
    int count = 0;
    
   
    
    while(temp!= NULL){
        if(count == i-1){
            save1 = temp;
        }
        if(count == j-1){
            save2 = temp;
        }
        temp = temp->next;
        count++;
    }
    
    if(i == 0){
        n1 = head;
   		n2 = save2->next;
        Node *t = n2->next;
        n2->next = n1->next;
        save2->next = n1;
        n1->next =  t;
        return n2;
        
    }
    
    n1 = save1->next;
    n2 = save2->next;
    save1->next = n2;
    save2->next = n1;
    Node *t = n1->next;
    n1->next = n2->next;
    n2->next = t;
    
    return head;
}