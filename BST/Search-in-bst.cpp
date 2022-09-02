bool searchInBST(BinaryTreeNode<int> *root , int k) {
	if(root == NULL){
        return false;
    }
    if(root->data ==k){
        return true;
    }
    bool get;
    if(k>root->data){
         get  = searchInBST(root->right , k); 
    }else{
          get = searchInBST(root->left , k);
    }
 return get;
    
}