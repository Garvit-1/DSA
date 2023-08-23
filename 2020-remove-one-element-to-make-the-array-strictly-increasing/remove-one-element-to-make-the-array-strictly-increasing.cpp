class Solution {
public:
    bool canBeIncreasing(vector<int>& nums) {
        int m=nums.size();
        vector<int> nums2=nums;
        for(int i=0;i<m-1;i++){
            if(nums[i]>=nums[i+1]){
                nums.erase(nums.begin()+i);
                nums2.erase(nums2.begin()+i+1);
                break;
            }
        }


        m=nums.size();
        bool flag=true;
        bool flag2=true;

        for(int i=0;i<m-1;i++){
            if(flag && nums[i]>=nums[i+1]){
                flag=false;
            }
            if(flag2 && nums2[i]>=nums2[i+1]){
                flag2=false;
            }
        }

        return flag2||flag;

    }
};