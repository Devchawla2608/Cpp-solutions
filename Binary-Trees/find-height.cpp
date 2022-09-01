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

int getHeight(TreeNode<int>* root) {
    int h = 0;
    for(int i = 0 ;i<root->children.size() ; i++){
        int height = getHeight(root->children[i]);
        if(height > h){
            h = height;
        }
    }
    return h+1;
}