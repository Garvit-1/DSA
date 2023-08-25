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
    void inorder(vector<int> & ans,TreeNode* root){
        if(!root) return;
        inorder(ans,root->left);
        ans.push_back(root->val);
        inorder(ans,root->right);
    }
    bool findTarget(TreeNode* root, int k) {
        vector<int> v;
        inorder(v,root);
        int i=0,j=v.size()-1;
        // for(auto a:v) cout<<a<<" ";
        while(i<j){
            if(v[i]+v[j]==k) return true;
            else if( v[i]+v[j] > k ) j--;
            else i++;
        }

        return false;
    }
};