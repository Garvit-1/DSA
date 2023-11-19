class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        int ans = 0;
        map<int,int> mp;
        for(auto &i: nums){
            mp[i]++;
        }
        auto it = mp.end();
        while(--it != mp.begin()){
            auto x = it;
            --x;
            ans += it->second;
            x->second += it->second;
        }
        return ans;
    }
};