/**********************************************************
	Following is the Binary Tree Node class structure

	template <typename T>
	class BinaryTreeNode {
    	public : 
    	T data;
    	BinaryTreeNode<T> *left;
    	BinaryTreeNode<T> *right;

    	BinaryTreeNode(T data) {
        	this -> data = data;
        	left = NULL;
        	right = NULL;
    	}
	};

***********************************************************/


#include<vector>
using namespace std;

bool checkCount(vector<int>* x , int data){
    for(int i = 0 ;i< x->size() ; i++){
        if(x->at(i) == data){
            return true;
        }
    }
    return false;
}

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


int getLCA(BinaryTreeNode <int>* root , int a, int b) {
    if(root == NULL){
       return -1; 
    }
    vector<int>* pathOfA =  getPath(root , a);
	vector<int>* pathOfB=   getPath(root , b);
    
    if(pathOfA->size()==0){
        return b;
    }
    else if(pathOfB->size()==0){
        return a;
    }
    else if(pathOfA->size()==0 && pathOfB->size()==0){
        return -1;
    }
    
    for(int i = 0 ; i<pathOfA->size() ; i++){
      if(checkCount(pathOfB, pathOfA->at(i))){
          return pathOfA->at(i);
      }
    }
}