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
 void replaceWithDepthValue(TreeNode<int>* root) {
    if(root == NULL){
        return;
    }
    queue<TreeNode<int>*> q;
    q.push(root);
    q.push(NULL);
    int i=0;
    while(!q.empty()){
        TreeNode<int>* f = q.front();
        while(f != NULL){
            f->data = i;
            q.pop();
            for(int i=0; i<f->children.size(); i++){
                q.push(f->children[i]);
            }
            f = q.front();
            if(f == NULL){
                q.push(NULL);
            }
        }
        q.pop();
        i++;
    }
}
