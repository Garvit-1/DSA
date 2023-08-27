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
int h1,p1;
int h2,p2;
    void help(TreeNode* root,int x,int y,int h){
        if(!root) return;
        if(root->left){
        if(root->left->val==x){
            h1=h+1;
            p1=root->val;
            return;
        }
        if(root->left->val==y){
            h2=h+1;
            p2=root->val;
            return;
        }
        }
        if(root->right){
        if(root->right->val==x){
            h1=h+1;
            p1=root->val;
            return;
        }
        if(root->right->val==y){
            h2=h+1;
            p2=root->val;
            return;
        }
        }
        

        help(root->left,x,y,h+1);
        help(root->right,x,y,h+1);
        

    }
    bool isCousins(TreeNode* root, int x, int y) {
        help(root,x,y,0);
        if(h1==h2 && p1!=p2) return true;

        return false;

    }
};