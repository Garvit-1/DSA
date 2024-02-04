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
    TreeNode* help(vector<int>& preorder, int s, int e) {
        if (s > e) {
            return nullptr;
        }

        TreeNode* root = new TreeNode(preorder[s]);
        int i;
        for (i = s; i <= e; ++i) {
            if (preorder[i] > preorder[s]) {
                break;
            }
        }

        root->left = help(preorder, s + 1, i - 1);
        root->right = help(preorder, i, e);

        return root;
    }

    TreeNode* bstFromPreorder(vector<int>& preorder) {
        return help(preorder, 0, preorder.size() - 1);
    }
};