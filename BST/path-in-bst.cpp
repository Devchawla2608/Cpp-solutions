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
#include<bits/stdc++.h>
vector<int>* getPath(BinaryTreeNode<int> *root , int data) {
	if(root == NULL){
         vector<int> *v = new vector<int>();
        return v;
    }
    if(root->data == data){
        vector<int> *v = new vector<int>();
        v->push_back(root->data);
        return v;
    }
    
    

    	vector<int>* leftVector =  getPath(root->left ,data);
    	if(leftVector->size()!=0){
        	leftVector->push_back(root->data);
        	return leftVector;
    	}    

    	vector<int>* rightVector =  getPath(root->right ,data);
    	if(rightVector->size()!=0){
        	rightVector->push_back(root->data);
        	return rightVector;
    	}    

    
    
    
    vector<int> *v = new vector<int>();
        return v;
}