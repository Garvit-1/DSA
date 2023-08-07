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
void inorder(vector<int> & vec,TreeNode* root){
    if(!root) return ;
    if(root->left)
    inorder(vec,root->left);
    vec.push_back(root->val);
    if(root->right)
    inorder(vec,root->right);
}
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int> v1;
        inorder(v1,root1);
        inorder(v1,root2);
        sort(v1.begin(),v1.end());
    return v1;
    }
};