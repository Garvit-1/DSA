class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        map<map<char,int>,vector<string>> mp;
        for(int i=0;i<strs.size();i++){
            map<char,int> mp1;
            for(auto a:strs[i]) mp1[a]++;

            mp[mp1].push_back(strs[i]);
        }

        for(auto a:mp){
            ans.push_back(a.second);
        }

        return ans;
        
    }
};