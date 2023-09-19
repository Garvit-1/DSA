class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            int n=i;
            int c=0;
            while(n>0){
                if(n%2==1) c++;
                n/=2;
            }
            if(c==k) ans+=nums[i];
        }

        return ans;
    }
};