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

class pr{
  public:
    TreeNode<int> *save = NULL ;
    int sum = 0;

};




pr func2(TreeNode<int>* root){
    pr smallAns;
    for(int i = 0 ;i< root->children.size() ; i++){
     smallAns =  func2(root->children[i]); 
    }
    int x = 0;
     for(int i = 0 ;i< root->children.size() ; i++){
         x += root->children[i]->data;
     }
    if(smallAns.sum >x){
        return smallAns;
    }else{
        pr p;
        p.sum = x;
        p.save = root;
        return p;
    }
}

TreeNode<int>* maxSumNode(TreeNode<int>* root) {    
	return  func2(root).save;
}