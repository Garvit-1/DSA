class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        int size = nums.size();
        if (size % 3 != 0)
            return vector<vector<int>>();
        int i=0;
        while(i!=nums.size()){
            vector<int> temp;
            if((i+2)<nums.size() && nums[i+2]-nums[i]<=k){
                temp.push_back(nums[i]);
                temp.push_back(nums[i+1]);
                temp.push_back(nums[i+2]);
                ans.push_back(temp);

            }
            else{
                return {};
            }
            i+=3;
        }
        return ans;
    }
};