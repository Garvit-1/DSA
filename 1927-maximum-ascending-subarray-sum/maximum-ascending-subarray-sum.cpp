class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int n=nums.size();
        int j=1;
        int ans=nums[0];
        int curr=nums[0];
        for(int j=1;j<n;j++){
            if(nums[j]>nums[j-1]){
                curr+=nums[j];    
            }
            else{
                curr=nums[j];
            }
                ans=max(curr,ans);
            
        }
        return ans;
    }
};