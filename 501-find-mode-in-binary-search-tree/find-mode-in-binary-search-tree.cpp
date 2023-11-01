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
    map<int,int> mp;
    void inorder(TreeNode* root){
        if(!root) return ;
        inorder(root->left);
        mp[root->val]++;
        inorder(root->right);
    }
    vector<int> findMode(TreeNode* root) {
        inorder(root);
        int m=0;
        vector<int> ans;
        for(auto a:mp){
            m=max(a.second,m);
        }
        cout<<m;
        for(auto a:mp){
            if(a.second==m)
            ans.push_back(a.first);
        }
        return ans;
        
    }
};