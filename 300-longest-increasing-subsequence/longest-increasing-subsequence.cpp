class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;

        // Initialize a DP array to store the lengths of LIS ending at each index
        vector<int> dp(n, 1);

        // Traverse through the array and update dp[i] for each element
        for (int i = 1; i < n; ++i) {
            for (int j = 0; j < i; ++j) {
                if (nums[i] > nums[j]) {
                    dp[i] = max(dp[i], dp[j] + 1);
                }
            }
        }

        // Find the maximum value in dp, which represents the length of the overall LIS
        int max_len = 1;
        for (int i = 0; i < n; ++i) {
            max_len = max(max_len, dp[i]);
        }

        return max_len;
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