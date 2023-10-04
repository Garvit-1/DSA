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
    int findBottomLeftValue(TreeNode* root) {
        int ans = root -> val;
        queue<TreeNode*> q;

        q.push(root);
        q.push(NULL);

        while(!q.empty())
        {
            TreeNode* temp = q.front();
            q.pop();

            if(temp == NULL && !q.empty())
            {
                q.push(NULL);
                ans = q.front() -> val;
            }

            if(temp!= NULL && temp -> left)
            q.push(temp -> left);

            if(temp!= NULL && temp -> right)
            q.push(temp -> right);
        }

        return ans;
    }
};