class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int ans=0;
        set<pair<int,int>> st;
        for(int i=0;i<nums.size()-1;i++){
            for(int j=i+1;j<nums.size();j++){
                if(abs(nums[i]-nums[j])==k) {
                    if(nums[i]<=nums[j])
                    st.insert({nums[i],nums[j]});
                    else st.insert({nums[j],nums[i]});
                }
            }
        }
        return st.size();
    }
};