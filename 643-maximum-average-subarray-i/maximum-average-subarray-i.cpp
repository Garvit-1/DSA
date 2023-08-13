class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double ans = INT_MIN;
        int i = 0;
        double sum = 0;
        for (; i < k; i++) {
            sum += nums[i];
        }
        ans = max(ans, sum / k);
        for (int j = k; j < nums.size(); j++) {
            sum += nums[j] - nums[j - k]; 
            ans = max(ans, sum / k); 
        }
        return ans;
    }
};
