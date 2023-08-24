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

// void dfs(TreeNode* root, long long sum){
//         if(!root)return;
//         if(root->val==sum)ans++;
//         dfs(root->left,sum-root->val);
//         dfs(root->right,sum-root->val);
//     }
void dfs(TreeNode* root,vector<int> curr,vector<vector<int>>& ans,int sum){
        if(!root) return;

        if(root->val==sum && !root->left && !root->right) 
        {
        curr.push_back(root->val);
        ans.push_back(curr);
        return;
        }
        curr.push_back(root->val);
        dfs(root->left,curr,ans,sum-root->val);
        dfs(root->right,curr,ans,sum-root->val);

}
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;
        dfs(root,{},ans,targetSum);
        return ans;
    }
};