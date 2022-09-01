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

Node *evenAfterOdd(Node *head)
{
    
    if(head == NULL){
        return head;
    }
    Node *temp = head;
    Node *evenHead = NULL;
    Node *oddHead = NULL;
    Node *evenTail = NULL;
    Node *oddTail = NULL;
	while(temp!=NULL){
        if(temp->data%2 ==  0){
            Node *newNode = new Node(temp->data);
            // cout<<newNode->data<<endl;
            if(evenTail == NULL){
                evenTail = newNode;
                evenHead = newNode;
            }else{
                evenTail->next = newNode;
                evenTail = newNode;
            }
        }else{
            Node *newNode = new Node(temp->data);
            if(oddTail == NULL){
                 oddTail = newNode;
                oddHead = newNode;
            }else{
                 oddTail->next = newNode;
                oddTail = newNode;
            }
        }
        temp = temp->next;
    }
    if(evenHead == NULL && evenTail == NULL ){
        oddTail->next = NULL;
        return oddHead;
    }
    if(oddTail == NULL && oddHead == NULL ){
        evenTail->next =NULL;
        return evenHead;
    }
    oddTail->next = evenHead;
    evenTail->next = NULL;
    return oddHead;
    
}