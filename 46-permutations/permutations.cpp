class Solution {
public:
    void help(vector<vector<int>>& ans,vector<int>& nums,int i){
        if(i>=nums.size()){
            ans.push_back(nums);
            return ;
        }
        for(int j=i;j<nums.size();j++){
            swap(nums[j],nums[i]);
            help(ans,nums,i+1);
            swap(nums[i],nums[j]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
         help(ans,nums,0);
        return ans;
    }
};