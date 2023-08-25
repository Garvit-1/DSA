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
void inorder(TreeNode* root,TreeNode* &root2){
    if(!root) return;
    inorder(root->left,root2);
    root2->right=new TreeNode(root->val);
    root2=root2->right;
    inorder(root->right,root2);


}
    TreeNode* increasingBST(TreeNode* root) {
    TreeNode *ans=new TreeNode();
    TreeNode *root2=ans;
    inorder(root,root2);

    return ans->right;
    }
};