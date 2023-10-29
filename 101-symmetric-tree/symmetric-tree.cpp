class Solution {
public:
    bool help(TreeNode* left, TreeNode* right) {
        if (!left && !right) return true;
        if (!left || !right) return false;
        if (left->val != right->val) return false;
        return help(left->left, right->right) && help(left->right, right->left);  // Swap the arguments here
    }
    
    bool isSymmetric(TreeNode* root) {
        if (!root) return true;  // Handle the case of an empty tree
        return help(root->left, root->right);
    }
};
