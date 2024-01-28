class Solution {
public:
    int help(int i,vector<int>& nums,vector<int> &dp){
        int n=nums.size();
        if(i==n-1) return 0;
        if(dp[i]!=-1) return dp[i];
        int ans=INT_MAX-1;
        for(int j=1;j <= min(nums[i],n-1-i); j++){
            int t=1 + help(i+j,nums,dp);
            ans=min(t,ans);
        }
        return dp[i]=ans;
    }
    int jump(vector<int>& nums) {
        vector<int> dp(nums.size(),-1);
        return help(0,nums,dp);

    }
};