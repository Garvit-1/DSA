class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int>dp(nums.size(),1);
        for(int i = 0; i < nums.size(); i++)
            for(int j = i -1 ; j >= 0; j--)
               if(nums[i] > nums[j]) dp[i] = max(dp[i], 1 + dp[j]);
        return *max_element(dp.begin(),dp.end());
    }
};

//Recursive TLE
//     int help(vector<int> nums,int i,int curr_m,int s){

//         if(i>=nums.size()) return s;

//         if(curr_m<nums[i])
//         return max(help(nums,i+1,curr_m,s),help(nums,i+1,nums[i],s+1));

//         return help(nums,i+1,curr_m,s);

//     }
//     int lengthOfLIS(vector<int>& nums) {
            
//        return help(nums,0,INT_MIN,0);
//     }
// };