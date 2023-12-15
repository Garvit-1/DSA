class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        map<string,int> mp;
        for(auto a:paths){
            mp[a[0]]++;
        }
        for(auto a:paths){
            if(mp[a[1]]==0) return a[1];
        }
        return "";
    }
};