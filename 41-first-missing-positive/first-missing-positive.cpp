class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        map<int,int> mp;
        int mini=1;
        for(auto a:nums){
            mp[a]++;
        }

        while(true){
            if(mp[mini]<1){
            return mini;
            break;
            } 

            mini++;
        }
    }
};