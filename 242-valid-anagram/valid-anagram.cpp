class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> v(26,0);
        for(auto a:s){
            v[a-'a']++;
        }
        for(auto a:t){
            v[a-'a']--;
        }
        for(auto a:v){
            if(a!=0) return false;
        }
        return true;
    }
};