/**********************************************************

	Following is the Binary Tree Node class structure

	template <typename T>
	class BinaryTreeNode {
    	public : 
    	T data;
    	BinaryTreeNode<T> *left;
    	BinaryTreeNode<T> *right;

    	BinaryTreeNode(T data) {
        	this -> data = data;
        	left = NULL;
        	right = NULL;
    	}
	};

***********************************************************/
 void rootToLeafPathsSumToK(BinaryTreeNode<int> *root, int k, string path){
    if(root == NULL){
        return;
    }   
    if(root->left == NULL && root->right == NULL && k==root->data){
        path += to_string(root->data);
        cout << path << endl;
        return;
    }
    rootToLeafPathsSumToK(root->left, k-root->data, path+to_string(root->data)+" ");
    rootToLeafPathsSumToK(root->right, k-root->data, path+to_string(root->data)+" ");
}
void rootToLeafPathsSumToK(BinaryTreeNode<int> *root, int k) {
 	rootToLeafPathsSumToK(root, k, "");
}
