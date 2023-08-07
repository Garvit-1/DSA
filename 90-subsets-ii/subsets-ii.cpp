class Solution {
public:
set<vector<int>> s;
void help(vector<int> nums,int i,vector<int> curr){
    if(i>=nums.size()){
        sort(curr.begin(),curr.end());
        s.insert(curr);
        return;
    }

    help(nums,i+1,curr);

    curr.push_back(nums[i]);
    help(nums,i+1,curr);
}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        help(nums,0,{});
        for(auto a:s){
            ans.push_back(a);
        }
        return ans;
    }
};