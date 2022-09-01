/************************************************************
 
    Following is the structure for the TreeNode class

    template <typename T>
    class TreeNode {
     public:
        T data;
        vector<TreeNode<T>*> children;
    
        TreeNode(T data) {
            this->data = data;
        }
    
        ~TreeNode() {
            for (int i = 0; i < children.size(); i++) {
                delete children[i];
            }
        }
    };

************************************************************/
 #include<climits>
TreeNode<int>* getNextLargerElement(TreeNode<int>* root, int x) {
    if(root == NULL){
        return NULL;
    }
    int result = INT_MAX;
    TreeNode<int>* node = NULL;
    if(root->data > x && root->data < result){
        result = root->data;
        node = root;
    }
    for(int i=0 ; i<root->children.size(); i++){
        TreeNode<int>* child = getNextLargerElement(root->children[i], x);
        if(child != NULL && child->data > x && child->data < result){
            result = child->data;
        	node = child;
        }
    }
    return node;
}