class Solution {
public:
    void help(int i,vector<int>& nums,vector<vector<int>> &ans,vector<int> temp){
        if(i==nums.size()){
        ans.push_back(temp);
        return;
        } 
        temp.push_back(nums[i]);
        help(i+1,nums,ans,temp);
        temp.pop_back();
        help(i+1,nums,ans,temp);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        help(0,nums,ans,{});
        return ans;
        
    }
};