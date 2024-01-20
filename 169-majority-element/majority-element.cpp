class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate=0;
        int c=0;
        for(int i=0;i<nums.size();i++){
            if(c==0) candidate=nums[i];
            if(nums[i]==candidate) c++;
            else c--;
        }

        return candidate;
        
    }
};