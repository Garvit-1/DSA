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

void pre(TreeNode* root,vector<TreeNode*>& helper){
    if(!root) return;
    helper.push_back(root);
    pre(root->left,helper);
    pre(root->right,helper);
}
    void flatten(TreeNode* root) {
        if(!root) return;
        vector<TreeNode*> helper;
        pre(root,helper);
        int i=0;
        for(i=0;i<helper.size()-1;i++){
            helper[i]->left=NULL;
            helper[i]->right=helper[i+1];
            
        }
        helper[i]->right=NULL;
        helper[i]->left=NULL;
    }
};