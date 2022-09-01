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
#include<queue>
void printLevelWise(TreeNode<int>* root) {
    queue<TreeNode<int> *> pendingNodes;
    pendingNodes.push(root);
    while(pendingNodes.size()!=0){
        TreeNode<int>* child = pendingNodes.front();
        pendingNodes.pop();
        cout<<child->data<<":";
        for(int i = 0 ; i<child->children.size() ; i++){
            if(i == child->children.size() -1){
            cout<<child->children[i]->data;
			pendingNodes.push(child->children[i]); 
                break;
            }
            cout<<child->children[i]->data<<",";
			pendingNodes.push(child->children[i]);
        }
        cout<<endl;
    } 
}