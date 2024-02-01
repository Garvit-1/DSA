class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        int i=0;
        while(i!=nums.size()){
            if((i+2)<nums.size() && nums[i+2]-nums[i]<=k){
                ans.push_back({nums[i],nums[i+1],nums[i+2]});
            }
            else{
                return {};
            }
            i+=3;
        }
        return ans;
    }
};