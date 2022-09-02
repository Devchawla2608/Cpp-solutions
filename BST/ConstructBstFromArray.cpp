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

BinaryTreeNode<int>* constructTree2(int *input, int startIndex , int endIndex) {
    if(startIndex>endIndex){
        return NULL;
    }
    if(startIndex == endIndex){
        BinaryTreeNode<int>* root = new BinaryTreeNode<int>(input[startIndex]);
        return root;
    }
    
    int rootIndex = (startIndex+endIndex)/2;
    int rootData = input[rootIndex];
    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);
    BinaryTreeNode<int>* leftChild = constructTree2(input,  startIndex ,rootIndex-1);
    BinaryTreeNode<int>* rightChild = constructTree2(input,  rootIndex+1 ,endIndex);
    root->left = leftChild;
    root->right = rightChild;
    return root;
}

BinaryTreeNode<int>* constructTree(int *input, int n) {
	return constructTree2(input,  0 , n-1);
}