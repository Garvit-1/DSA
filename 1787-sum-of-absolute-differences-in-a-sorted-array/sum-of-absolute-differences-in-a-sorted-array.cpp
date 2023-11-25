class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        vector<int> ans;
        int l=0,r=0,n=nums.size();
        for(auto a:nums) r+=a;
        ans.push_back( r - n*nums[0]);
        r-=nums[0];
        for(int i=1;i<n;i++){
            l+=nums[i-1];
            r-=nums[i];
            int x= (i*nums[i]-l) + (r - (n-i-1)*nums[i]); 
            ans.push_back(x);
        }
        return ans;
        

    }
};