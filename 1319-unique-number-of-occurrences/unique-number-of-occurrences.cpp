class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> mp;
        for(auto a:arr) mp[a]++;
        set<int> st;
        for(auto a:mp) st.insert(a.second);
        if(mp.size()==st.size()) return true;
        return false;
        
    }
};