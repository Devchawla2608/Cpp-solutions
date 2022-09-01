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
#include<bits/stdc++.h>
TreeNode<int>* maxDataNode(TreeNode<int>* root) {
     TreeNode<int> *save = new TreeNode<int>(INT_MIN);
   for(int i = 0 ; i<root->children.size() ; i++){
       TreeNode<int>* maxNode = maxDataNode(root->children[i]); 
       if(save->data<maxNode->data){
           save = maxNode;
       }
   }
    if(root->data>save->data){
        return root;
    }else{
        return save;
    }
}