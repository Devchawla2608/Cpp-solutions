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

Node *getMeNode(Node *head,  int N){
    int j = 1;
    Node *temp = head;
    while(temp!=NULL){
        if(j == N){
            return temp->next;
        }
        temp = temp->next;
        j++;
    }
    return NULL;
}

Node *skipMdeleteN(Node *head, int M, int N)
{
    if(N==0){
        return head;
    }
    if(M == 0){
        return NULL;
    }
    if(head == NULL){
        return head;
    }
    Node *temp = head;
    int i = 1;
	while(temp!=NULL){
        if(i == M){
            Node *smallOutput = getMeNode(temp->next, N);
            temp->next = smallOutput;
            i = 1;
            temp = temp->next;
        }
        else{
       		temp = temp->next;
            i++;         
        }
    }
    return head;
}