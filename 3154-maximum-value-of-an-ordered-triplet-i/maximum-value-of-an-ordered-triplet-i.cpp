class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int n=nums.size();
        long long res=0;
        int maxdiff=0;int curmax=0;
        for(auto a:nums){
            res=max(res, 1LL * maxdiff * a );
            maxdiff=max(maxdiff,curmax-a);
            curmax=max(curmax,a);
        }
        return res;
    }
};