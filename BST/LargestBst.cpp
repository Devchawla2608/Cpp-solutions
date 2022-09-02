/**********************************************************

	Following is the Binary Tree Node class structure

	template <typename T>
	class BinaryTreeNode {
    	public: 
    	T data;
    	BinaryTreeNode<T> *left;
    	BinaryTreeNode<T> *right;

    	BinaryTreeNode(T data) {
        	this->data = data;
        	left = NULL;
        	right = NULL;
    	}
	};
	
***********************************************************/

#include<climits>
#include<bits/stdc++.h>
bool isBST3(BinaryTreeNode<int> *root ,int max , int min){
   if(root == NULL){
        return true;
    } 
    
    if(root->data <min || root->data>max){
        return false;
    }
    bool isLeftOk = isBST3(root->left , root->data-1 , min);
    bool isRightOk = isBST3(root->right , max , root->data);
    return isLeftOk&&isRightOk;
} 
 
bool isBST(BinaryTreeNode<int> *root) {
	return isBST3(root , INT_MAX , INT_MIN);
}

    

int hightOfBST(BinaryTreeNode<int> *root){
    if(root == NULL){
        return 0;
    }
    if(root->left == NULL && root->right ==NULL){
        return 1;
    }
    int leftHeight =  hightOfBST(root->left);
	int rightHeight = hightOfBST(root->right);
    return max(leftHeight ,  rightHeight ) + 1 ;
}


int largestBSTSubtree(BinaryTreeNode<int> *root) {
    if(root == NULL){
    	return 0;
    }
    if(root->left == NULL && root->right ==NULL){
    	return 1;
    }
    int leftHeightBst =largestBSTSubtree(root->left);
    int rightHeightBst =largestBSTSubtree(root->right);
    
    bool check = isBST(root);
      int getHeight = 0;
    if(check){
      getHeight =  hightOfBST(root);
    }
    
    return max(leftHeightBst , max(rightHeightBst ,getHeight ));
}