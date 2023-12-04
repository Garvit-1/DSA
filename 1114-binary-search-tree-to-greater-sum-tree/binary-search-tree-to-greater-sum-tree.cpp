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
 void help(TreeNode* root,int & h){
     if(!root) return;
     help(root->right,h);
     root->val+=h;
     h=root->val;
     help(root->left,h);
 } 
    TreeNode* bstToGst(TreeNode* root) {
        int ans=0;
        help(root,ans);
        return root;
    }
};