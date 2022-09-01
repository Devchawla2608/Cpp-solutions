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

int getLeafNodeCount(TreeNode<int>* root) {
    if(root->children.size()  == 0){
        return 1;
    }
    int totalLeafs = 0;
    for(int i = 0 ;i<root->children.size() ; i++){
        int count = getLeafNodeCount(root->children[i]);
        totalLeafs += count;
    }
    return totalLeafs;
}