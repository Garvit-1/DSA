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
    void pre(TreeNode* root,int low,int high){
        if(!root) return;
        if(root->val>=low && root->val<=high){
            ans+=root->val;
        }
        pre(root->left,low,high);
        pre(root->right,low,high);
    }

    int rangeSumBST(TreeNode* root, int low, int high) {
        pre(root,low,high);
        return ans;
    }
};