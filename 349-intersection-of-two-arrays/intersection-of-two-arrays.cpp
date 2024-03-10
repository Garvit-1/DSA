class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        map<int,int> m1;
        map<int,int> m2;
        for(auto a:nums1){
            m1[a]++;
        }
        for(auto a:nums2){
            m2[a]++;
        }

    for(auto a:m1){
        if(m2[a.first]>0) ans.push_back(a.first);
    }
    return ans;
    }
};