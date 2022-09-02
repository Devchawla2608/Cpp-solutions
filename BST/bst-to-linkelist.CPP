/**********************************************************

	Following are the Binary Tree Node class structure and the 
	Node class structure

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

	template <typename T>
 	class Node{
    	public:
    	T data;
    	Node<T> *next;
    
    	Node(T data) {
        	this->data = data;
        	this->next = NULL;
    	}
 	};

***********************************************************/
#include<bits/stdc++.h>
pair<Node<int>* , Node<int>*> constructLinkedList1(BinaryTreeNode<int>* root) {
	if(root == NULL){
        pair<Node<int>* , Node<int>*> p;
        p.first = NULL;
        p.second = NULL;
        return p;
    }
    
    if(root->left == NULL && root->right == NULL){
        pair<Node<int>* , Node<int>*> p;
        Node<int>* rootPointer = new Node<int>(root->data);
        p.first = rootPointer;
        p.second = rootPointer;
        return p;
    }
    
    pair<Node<int>* , Node<int>*> leftChild = constructLinkedList1(root->left);
    pair<Node<int>* , Node<int>*> rightChild =  constructLinkedList1(root->right);
    pair<Node<int>* , Node<int>*> p;
	Node<int>* rootPointer = new Node<int>(root->data);
    p.first = rootPointer;
    p.second = rootPointer;
    
    if(leftChild.second == NULL &&leftChild.first == NULL){
        p.second->next = rightChild.first;
        p.second = rightChild.second;
        return p;
    }
    
    if(rightChild.first == NULL && rightChild.second == NULL){
        leftChild.second->next = p.first;
        p.first = leftChild.first;
        return p;
    }
    
    leftChild.second->next = p.first;
    p.second->next = rightChild.first;
    p.first = leftChild.first;
    p.second = rightChild.second;
    return p;
}

Node<int>* constructLinkedList(BinaryTreeNode<int>* root) {
pair<Node<int>* , Node<int>*> p = constructLinkedList1(root);
    return p.first;
}