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
    TreeNode* help(vector<int> nums,int s,int e){
    if(s>=e) return NULL;
    int mid=(s+e)/2;
    TreeNode* a=new TreeNode(nums[mid]);
    a->left=help(nums,s,mid);
    a->right=help(nums,mid+1,e);
    return a;
}
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        // TreeNode* root;
        return help(nums,0,nums.size());

    }
};