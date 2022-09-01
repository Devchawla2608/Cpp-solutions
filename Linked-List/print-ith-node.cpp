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

void printIthNode(Node *head, int i)
{
    if(head == NULL){
        return;
    }
    Node *temp = head;
    while(temp!=NULL){
        if(i==0){
            cout<<temp->data<<endl;
            return ;
        }
        temp = temp->next;
        i--;
    }
}