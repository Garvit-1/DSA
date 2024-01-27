class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        if(n<2){
        return n;
        } 
            
        int ind = 2;
        for (int i = 2; i < nums.size(); i++) {
            if(nums[ind-2]!=nums[i])
            {
                nums[ind++]=nums[i];
            }
        }

        return ind;
        
    }
};