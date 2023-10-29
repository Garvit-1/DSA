class Solution {
public:
    int maxi = INT_MIN;  // Change the variable name here
    
    int solve(TreeNode* root) {
        if (!root) return 0;
        int l = solve(root->left);  // Change maxPathSum to solve here
        int r = solve(root->right);  // Change maxPathSum to solve here
        int curr = root->val;
        if (l >= 0) curr += l;
        if (r >= 0) curr += r;
        maxi = max(maxi, curr);
        return max({root->val, root->val + l, root->val + r});  // Handle negative values correctly
    }
    
    int maxPathSum(TreeNode* root) {
        solve(root);
        return maxi;
    }
};