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
        if(!root) return root;
        queue<Node*> q;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            vector<Node*> temp;
            for(int i=0;i<n;i++){
                Node* cur=q.front();
                q.pop();
                temp.push_back(cur);
                if(cur->left!=NULL) q.push(cur->left);
                if(cur->right!=NULL) q.push(cur->right);
            }
            int i=0;
            for(i=0;i<n-1;i++){
                temp[i]->next=temp[i+1];
            }
            temp[i]->next=NULL;
            temp.clear();
        }
        
    return root;
    }
};