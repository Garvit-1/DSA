class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        if(n<=2) return n;
        int k=0;
        int i=2;
        while(i<nums.size()){
            if(nums[i]==nums[i-1]){
                if(nums[i-2]==nums[i]){
                    nums.erase(nums.begin()+i);
                    k++;
                    continue;
                }
            }
                i++;
        }
        return n-k;
    }
};