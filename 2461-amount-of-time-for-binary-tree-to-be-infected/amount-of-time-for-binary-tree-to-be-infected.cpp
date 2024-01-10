/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
        unordered_map<int,vector<int>> mp;
        void traverse(TreeNode* root){

            if(!root) return;
            if(root->left) { 
                mp[root->val].push_back(root->left->val);
                mp[root->left->val].push_back(root->val);
            
        }
        if(root->right) { 
                mp[root->val].push_back(root->right->val);
                mp[root->right->val].push_back(root->val);
        }

        traverse(root->left);
        traverse(root->right);
        }

    int amountOfTime(TreeNode* root, int start) {
        traverse(root);
        int ans = -1;
        // int n = mp.size();
        queue<int> q;
        q.push(start);
        unordered_set<int> s;

        while (!q.empty()) {
            ans++;
            int x = q.size();
            for (int i = 0; i < x; i++) {
                int cn=q.front();
                q.pop();
                s.insert(cn);  
                for (auto a : mp[cn]) {
                    if (!s.count(a)) {
                        q.push(a);
                    }
                }
            }
            
        }

        return ans;
    }

};