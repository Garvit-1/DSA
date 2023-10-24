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
    vector<int> largestValues(TreeNode* root) {
        vector<int> ans;
        if(!root) return ans;
        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()){
            int n=q.size();
            int c=INT_MIN;
            for(int i=0;i<n;i++){
            TreeNode * cur=q.front();
            q.pop();
            c=max(c,cur->val);
            if(cur->left) q.push(cur->left);
            if(cur->right) q.push(cur->right);
            }
            ans.push_back(c);
        }

        return ans; 
    }
};