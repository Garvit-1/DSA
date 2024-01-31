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
    int help(TreeNode* root,bool& ans){
        if(!root) return 0;
        int a=help(root->left,ans);
        int b=help(root->right,ans);
        int x=abs(a-b);
        if(x>1) ans = false;
        return 1+max(a,b);

    }
    bool isBalanced(TreeNode* root) {
        if(!root) return true;
        bool ans=true;
        help(root,ans);
        return ans;
        
    }
};