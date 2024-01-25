class Solution {
public:
    int longestConsecutive(vector<int>& nums) { 
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int maxi = 0;
        int cnt = 1;
        for(int i = 0; i < n; i++){
            if(i < n-1 && nums[i] == nums[i+1]){
                continue;
            }
            if(i < n-1 && nums[i] + 1 == nums[i+1]){
                cnt++;   
            }
            else{
                maxi = max(maxi, cnt);
                cnt = 1;
            }
        }
        return maxi;
    }
};