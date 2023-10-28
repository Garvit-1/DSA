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

    map<int,priority_queue<pair<int,int>>> mp;
    void solve(TreeNode* root, int d, int l) {
    if (!root) return;

    if (root->left) solve(root->left, d - 1, l + 1);
        mp[d].push({l,root->val});
    if (root->right) solve(root->right, d + 1, l + 1);
}

    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>> ans;
        mp.clear(); // Clear the map before using it
        if (!root) return ans;

        solve(root, 0, 1);
        for (auto a : mp) {
            vector<int> t;
            while(!a.second.empty()){
            int x=a.second.top().second;
            a.second.pop();
            t.push_back(x);
            } 
            reverse(t.begin(),t.end());
            ans.push_back(t);
        }
        return ans;        
    }
};