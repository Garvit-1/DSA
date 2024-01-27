class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> s;
        int ind=0;
        for(int i=0;i<nums.size();i++){
            if(s.count(nums[i])==0){
                s.insert(nums[i]);
                nums[ind++]=nums[i];
            }
        }

        return ind;
        
    }
};