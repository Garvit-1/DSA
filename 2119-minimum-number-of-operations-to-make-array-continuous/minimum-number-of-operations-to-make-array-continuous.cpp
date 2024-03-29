class Solution {
public:
    int minOperations(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int n = nums.size(); // Number of elements in the vector
        int left = 0; // Left pointer for the sliding window
        int maxCount = 1; // Initialize the maximum count of distinct elements
        int currentCount = 1; // Initialize the count of distinct elements in the current window

        // Iterate through the vector to find the minimum operations
        for (int right = 1; right < n; ++right) {
            // Check if the current element is equal to the previous one
            if (nums[right] == nums[right - 1]) {
                continue; // Skip duplicates
            }
            while (nums[right] - nums[left] > n - 1) {
                // Move the left pointer to shrink the window
                if(left<n && nums[left+1]==nums[left]){
currentCount++;
}
                left++;
                currentCount--;
            }

            // Update the count of distinct elements in the current window
            currentCount++;

            // Update the maximum count
            maxCount = max(maxCount, currentCount);
        }

        // Calculate the minimum operations
        int minOps = n - maxCount;

        return minOps;
    }
};