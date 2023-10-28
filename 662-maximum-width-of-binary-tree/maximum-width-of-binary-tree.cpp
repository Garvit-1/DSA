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
    int widthOfBinaryTree(TreeNode* root) {
        queue<pair<TreeNode *,long long int>> q;
        q.push({root,0});
        int res=0;
        while(!q.empty()){
            int n=q.size();
            int minLevelId=q.front().second;
            int left=0,right=0;
            for(int i=0;i<n;i++){
                TreeNode *curr=q.front().first;
                long long int idx=q.front().second-minLevelId;
                q.pop();
                if(curr->left){
                    q.push({curr->left,idx*2+1});
                }
                if(curr->right){
                    q.push({curr->right,idx*2+2});
                }
                if(i==0){
                    left=idx;
                }
                if(i==n-1){
                    right=idx;
                }
            }
            res=max(res,right-left+1);
        }
        return res;
    }
};