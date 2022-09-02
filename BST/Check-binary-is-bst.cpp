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

#include<climits>
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





























/Methode 2

#include<iostream>
#include<algorithm>
#include<cstring>
#include<cmath>
#include<climits>
#include<vector>
#include<stack>
#include<queue>
#include<unordered_map>
#include<unordered_set>
#include<map>
#include<set>
#include<list>
using namespace std;
pair<int, int> getMinAndMax(BinaryTreeNode<int> *root) {
	if(root == NULL){
        pair<int, int> p;
        p.first  =  INT_MAX;
        p.second  =  INT_MIN;
        return p;
    }
     
    pair<int, int> leftSubTree = getMinAndMax(root->left);
    pair<int, int> rightSubTree = getMinAndMax(root->right);
    int minimum = min(root->data, min(leftSubTree.first, rightSubTree.first));
    int maximum = max(root->data, max(leftSubTree.second, rightSubTree.second));
    pair<int, int> res;
    res.first = minimum;
    res.second = maximum;
    return res;   
     
     
}

bool isBST(BinaryTreeNode<int> *root) {
    // cout<<"This is on "<<root->data<<endl;
	if(root == NULL){
        return true;
    }
  
    if(root->left == NULL && root->right == NULL){
        return true;
    }
   
    bool leftbool = true;
    bool rightbool = true;
    
    if(root->left!=NULL && root->data > root->left->data){
        leftbool = isBST(root->left);
	}

    if(root->right!= NULL && root->data <= root->right->data){
         rightbool = isBST(root->right);
    }

    // cout<<"This is value of leftbool and rightbool"<<root->data<<" "<<leftbool<<": "<<rightbool<<endl;
    pair<int, int> leftSubTree = getMinAndMax(root->left);
    pair<int, int> rightSubTree = getMinAndMax(root->right);
    
    bool leftCheck = true;
    if(leftSubTree.second>=root->data){
        // cout<<"This is max"<<leftSubTree.second<<endl;
        leftCheck = false;
    }
    bool rightCheck = true;
    if(rightSubTree.first<root->data){
        rightCheck = false;
    }
    if(leftbool == false || rightbool == false || leftCheck == false || rightCheck == false){
        return false;
    }else{
        return  true;
    }
}