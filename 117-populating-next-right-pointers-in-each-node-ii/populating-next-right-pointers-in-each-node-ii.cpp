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
    void help(){
        
    }
    Node* connect(Node* root) {
        vector<vector<Node*>> v;
        queue<Node*> q;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            vector<Node*> temp;
            for(int i=0;i<n;i++){
            Node* x=q.front();
            q.pop();
            temp.push_back(x);
            if(x){
            if(x->left) q.push(x->left);
            if(x->right) q.push(x->right);
            }
            }
            v.push_back(temp);
        }

        for(auto a:v){
            for(int i=0;i<a.size()-1;i++){
                a[i]->next=a[i+1];
            }
        }
        return root;
        

    }
};