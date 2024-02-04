/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 **/

class Solution {
public:
    vector<TreeNode*> a, b;

    void help(TreeNode* root, TreeNode* p, TreeNode* q, vector<TreeNode*>& curr) {
        if (!root) return;

        if (root == p) {
            a = curr;
            a.push_back(p);
        }

        if (root == q) {
            b = curr;
            b.push_back(q);
        }

        curr.push_back(root);
        help(root->left, p, q, curr);
        help(root->right, p, q, curr);
        curr.pop_back();
    }

    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<TreeNode*> v;
        help(root, p, q, v);

        int n = min(a.size(), b.size());
        for (int i = n - 1; i >= 0; i--) {
            if (a[i] == b[i]) {
                return a[i];
            }
        }

        return nullptr;
    }
};
