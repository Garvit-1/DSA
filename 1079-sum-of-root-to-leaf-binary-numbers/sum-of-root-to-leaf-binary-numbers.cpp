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
    void traverse(TreeNode* root,int& ans,int curr){
        if(!root) return;


        curr=curr*2+root->val;
        // cout<<curr<<" ";
        if(!root->left && !root->right) {ans+=curr;return;}
        traverse(root->left,ans,curr);
        traverse(root->right,ans,curr);
        

    }
    int sumRootToLeaf(TreeNode* root) {
        int ans=0;
        traverse(root,ans,0);
        return ans;
    }
};