class Solution {
public:
    int help(vector<int>& nums,int i,vector<int> &dp){
        if(i>=nums.size()){return 0;}
        if(dp[i]!=-1) return dp[i];

        return dp[i] = nums[i] + max(help(nums,i+2,dp),help(nums,i+3,dp));

    }
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size(),-1);
        return max(help(nums,0,dp),help(nums,1,dp));   
    }
};