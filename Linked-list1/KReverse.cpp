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
 class Pair{
    public:
    	Node* head;
    	Node* tail;
};
Pair reverse(Node* head){
    if(head == NULL or head->next==NULL){
        Pair pair;
        pair.head = head;
        pair.tail = head;
        return pair;
    }
	Pair ans = reverse(head->next);
    ans.tail->next = head;
    head->next = NULL;
    ans.tail = head;
    return ans;
}
Node *kReverse(Node *head, int k){
    if(head == NULL or head->next == NULL){
        return head;
    }
    int i=1;
    Node* nextHead = NULL;
    Node* tail = head;
	while( tail != NULL && tail->next != NULL  && i<k){
        tail=tail->next;
        i++;
    }
    nextHead = tail->next;
    tail->next = NULL;
    Pair reverseResult = reverse(head);
    Node* ans = kReverse(nextHead, k);
    reverseResult.tail->next = ans;
    return reverseResult.head;
}