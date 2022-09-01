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

int findNodeRec(Node *head, int n)
{
	if(head == NULL){
        return -1;
    }
    int index =  findNodeRec(head->next , n);
    if(index != -1){
        return index+1;
    }else{
    if(head->data == n){
        return 0;
    }else{
        return -1;
    }     
    }
   
}