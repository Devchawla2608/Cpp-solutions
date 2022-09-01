void preOrder(TreeNode<int>*root){
    // This is edge case not base case 
    if(root == NULL){
        return ;
    }
    cout<<root->data<<" ";
    for(int i = 0 ;i<root->children.size() ; i++){
        preOrder(root->children[i]);
    }
}