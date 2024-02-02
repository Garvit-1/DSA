#include <queue>

class Solution {
public:
    Node* connect(Node* root) {
        if (!root) return root;
        
        std::queue<Node*> q;
        q.push(root);
        
        while (!q.empty()) {
            int n = q.size();
            Node* right = nullptr;
            
            for (int i = 0; i < n; i++) {
                Node* cur = q.front();
                q.pop();
                cur->next = right;
                right = cur;

                if (cur->right) {
                    q.push(cur->right);
                }
                if (cur->left) {
                    q.push(cur->left);
                }
            }
        }
        
        return root;
    }
};
