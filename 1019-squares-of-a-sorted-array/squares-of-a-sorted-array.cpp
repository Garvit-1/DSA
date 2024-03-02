class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans;
        for(auto a:nums) ans.push_back(a*a);
        sort(ans.begin(),ans.end());
        return ans;
    }
};