class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        for(int i = 0; i < nums.size(); i++){
            if(mp[target-nums[i]]==0)
                mp[nums[i]] = i+1;
            else
                return {mp[target - nums[i]]-1, i};
        }
 
        return {-1, -1};

    }
};