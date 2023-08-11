class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans=0,curr=0;

        for(auto a:nums){
            if(a==1) curr++;
            else{
                ans=max(curr,ans);
                curr=0;
            }
        }
        ans=max(curr,ans);
        return ans;
    }
};