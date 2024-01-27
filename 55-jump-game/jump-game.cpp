class Solution {
public:
    int help(vector<int> &nums,int i,vector<int> &dp){
        if(i==nums.size()-1) return true;
        if(dp[i]!=-1) return dp[i];
        bool ans=0;
        for(int x=1;x<=nums[i];x++){
            ans = ans || help(nums,i+x,dp);
            if(ans) return dp[i]=ans;
        }
        return dp[i]=0;
    }
    bool canJump(vector<int>& nums) {
        vector<int> dp(nums.size(),-1);
        return help(nums,0,dp);
        
    }
};