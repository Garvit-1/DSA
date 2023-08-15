/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        vector<vector<Node*>> ans;
        queue<Node*>q;
        if(root==NULL){
            return root;
        }
        q.push(root);
        while(!q.empty()){
            int size = q.size();
            vector<Node*> level;
            for(int i=0;i<size;i++){               
                Node*node=q.front();
                q.pop();

                if(node->left!=NULL){
                    q.push(node->left);
                }
                if(node->right!=NULL){
                    q.push(node->right);
                }
                level.push_back(node);
            }
            ans.push_back(level);
        }
        for(auto a:ans){
            for(int i=0;i<a.size()-1;i++){
                a[i]->next=a[i+1];
            }
        }
        return root;

    }
};