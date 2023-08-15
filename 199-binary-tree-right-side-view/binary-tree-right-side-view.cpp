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
void rsv(TreeNode* root){

}
    vector<int> rightSideView(TreeNode* root) {
        queue<TreeNode*> q;
        vector<vector<int>> ans;
        vector<int> temp;
        if(!root) return temp;
        q.push(root);
        q.push(NULL);
        while(!q.empty()){
            TreeNode* t=q.front();
            q.pop();
            if(t){
                if(t->left)
                q.push(t->left);
                if(t->right)
                q.push(t->right);

                temp.push_back(t->val);
            }
            else if(t==NULL){
                if(!q.empty()) q.push(NULL);
                ans.push_back(temp);
                temp.clear();
            }
        }

        for(auto a:ans){
            temp.push_back(a.back());
        }
        return temp;
        
    }
};