/************************************************************

    Following is the Binary Tree node structure

    template <typename T>
    class BinaryTreeNode
    {
        public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data)
        {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

void insertDuplicateNode(BinaryTreeNode<int> *root) {
    if(root == NULL){
        return;
    }
    if(root->left == NULL && root->right == NULL){
        BinaryTreeNode<int> *newNode = new BinaryTreeNode<int>(root->data);
        root->left  = newNode;
        return;
    }
    BinaryTreeNode<int> *newNode = new BinaryTreeNode<int>(root->data);
    BinaryTreeNode<int> *saveNode = root->left;
    root->left  = newNode;
    newNode->left = saveNode;
    insertDuplicateNode(saveNode);
     insertDuplicateNode(root->right);
    return ;
    
}