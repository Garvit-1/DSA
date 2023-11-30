class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int ans=0;
        int  c=INT_MAX;
        for(int i=0;i<nums.size();i++){
            c=min(nums[i],c);
            ans=max(nums[i]-c,ans);
        }
        return ans;
    }
};