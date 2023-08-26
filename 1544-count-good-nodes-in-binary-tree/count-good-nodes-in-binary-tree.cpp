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
void solve(TreeNode* root,int curr){
    if(!root) return;

    if(root->val >= curr){
    ans++;
    solve(root->left,root->val);
    solve(root->right,root->val);
    }

    else {
    solve(root->left,curr);
    solve(root->right,curr);
    }
}
    int goodNodes(TreeNode* root) {
        solve(root,INT_MIN);
        return ans;
    }
};