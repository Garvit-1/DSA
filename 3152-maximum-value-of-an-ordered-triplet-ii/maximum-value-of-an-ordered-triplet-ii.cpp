class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int n=nums.size();
        long long res=0;
        int md=0,mcur=0;
        // md->A[i]-A[j]  : max difference val till now
        // mcur->current maximum element
        for(int i=0;i<n;i++){
            res=max(res, 1LL* md * nums[i]);
            md=max(md,mcur - nums[i]);
            mcur=max(mcur,nums[i]);
        }
        return res;
    }
};