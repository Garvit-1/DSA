class Solution {
public:
    bool canJump(vector<int>& nums) {
        
        int maxi=0;
        for(int i=0;i<nums.size();i++){
            if (i > maxi) {
                // If the current index is unreachable, return false
                return false;
            }
            maxi=max(nums[i]+i,maxi);
        if(maxi>=nums.size()-1) return true;
        }
return false;
    }
};