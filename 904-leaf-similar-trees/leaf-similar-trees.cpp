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
    void inorder(TreeNode* root,vector<int>& s){
        if(!root) return;

        inorder(root->left,s);

        if(!root->left && !root->right)

        s.push_back(root->val);

        inorder(root->right,s);
        }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> s1,s2;
        inorder(root1,s1);
        inorder(root2,s2);
        // cout<<s1<<" "<<s2;

        if(s1==s2) return true;
        return false;
    }
};