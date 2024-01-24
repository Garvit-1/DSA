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
    void help(TreeNode* root,int h,int c,map<int,vector<pair<int,int>>>& mp){
        if(!root) return;
        mp[c].push_back({h,root->val});
        help(root->left,h+1,c-1,mp);
        help(root->right,h+1,c+1,mp);
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {

        vector<vector<int>> ans;
        map<int,vector<pair<int,int>>> mp;
        help(root,0,0,mp);

        for(auto a:mp){
            sort(a.second.begin(),a.second.end());
            vector<int> c;
            for(auto b:a.second){
                c.push_back(b.second);
            }
            ans.push_back(c);
            c.clear();
        }

        return ans;


        
    }
};