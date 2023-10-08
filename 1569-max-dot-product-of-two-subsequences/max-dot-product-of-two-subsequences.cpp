class Solution {
public:
    vector<vector<int>> memo;

    int help(vector<int>& nums1, vector<int>& nums2,int i,int j){
    if(i==nums1.size() || j==nums2.size()) return 0;
    if (memo[i][j] != INT_MIN)
        return memo[i][j];

    memo[i][j]= max(nums1[i]*nums2[j]+ help(nums1,nums2,i+1,j+1), max(help(nums1,nums2,i+1,j),help(nums1,nums2,i,j+1)) );

    return memo[i][j];
    }
    int maxDotProduct(vector<int>& nums1, vector<int>& nums2) {
        memo.assign(nums1.size(), vector<int>(nums2.size(), INT_MIN));

        int ans=help(nums1,nums2,0,0);

        if(ans==0) {
            ans=INT_MIN;
            for(auto a:nums1){
                for(auto b:nums2) ans=max(a*b,ans);
            }
        }

        return ans;

    }
};