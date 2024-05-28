class Solution {
public:
    int specialArray(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0,x=0;
        while(i<nums.size()){
            if(x<=nums[i]){
                if(x==nums.size()-i) return x;
                else x++;
            }
            else i++;
        }
        return -1;
    }
};