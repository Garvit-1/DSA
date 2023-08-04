class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans=0;
        for(int i= nums.size()-1;i>=0;i--){
            if(i%2==0) ans+=nums[i];
        }
    return ans;
    }
};