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
    TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {
        map<int,TreeNode*> mp;
        set<int> s1,s2,s3;
        for(auto a:descriptions){
            if(!mp[a[0]]) mp[a[0]]=new TreeNode(a[0]);

            if(!mp[a[1]]){
                mp[a[1]]=new TreeNode(a[1]);
            }

            if(a[2]==1){
                mp[a[0]]->left= mp[a[1]];
            }
            else mp[a[0]]->right= mp[a[1]];
            
        s1.insert(a[0]);
        s2.insert(a[1]);
        }
        for(auto a:s1){
            if(s2.find(a)==s2.end()) return mp[a];
        }
        return NULL;
    }
};