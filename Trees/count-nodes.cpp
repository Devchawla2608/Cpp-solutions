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
int countNodes(TreeNode<int>*root){
    int count = 0;
    for(int i = 0 ; i<root->children.size() ; i++){
        int sum =  countNodes(root->children[i]);
        count = count + sum;
    }
    return count + 1;
}
