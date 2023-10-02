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
void help(TreeNode* root,int cur){
    
}
    TreeNode* reverseOddLevels(TreeNode* root) {
        
        queue<TreeNode*> q;

        q.push(root);
        int flag=0;
        while(!q.empty()){
            int n=q.size();
            vector<TreeNode*> v;
            for(int i=0;i<n;i++){
            TreeNode* curr=q.front();q.pop();
               if(curr->left) q.push(curr->left);
               if(curr->right) q.push(curr->right);
                v.push_back(curr);
            }
            if(flag==1){
                n=v.size()-1;int i=0;
                while(i<n){
                    swap(v[i]->val,v[n]->val);
                    i++;n--;
                }
                flag=0;
            }
            else flag=1;
        }

        return root;
    }
};