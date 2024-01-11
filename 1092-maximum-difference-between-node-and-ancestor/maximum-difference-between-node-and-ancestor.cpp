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
int ans=0;
    void solve(TreeNode* root,int mini,int maxi){
        if(!root) return;
        maxi=max(maxi,root->val);
        mini=min(mini,root->val);
        solve(root->left,mini,maxi);
        solve(root->right,mini,maxi);
        ans=max(maxi-mini,ans);
    }
    int maxAncestorDiff(TreeNode* root) {
        solve(root,INT_MAX,INT_MIN);
        return ans;
        
    }
};