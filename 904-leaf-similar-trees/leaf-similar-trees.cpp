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
void help(TreeNode* root,vector<int> &v){
    // if(!root->left && !root->right) v.push_back(root->val);

    stack<TreeNode*> st;
    st.push(root);
    while(!st.empty()){
        TreeNode* cur=st.top();
        st.pop();
        if(!cur->left && !cur->right) v.push_back(cur->val);
        if(cur->left) st.push(cur->left);
        if(cur->right) st.push(cur->right);
    }
    
}
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> v1,v2;
        help(root1,v1);
        help(root2,v2);
        if(v1==v2) return true;
        return false;
    }
};