class Solution {
public:
    char repeatedCharacter(string s) {
        map<char,int> mp;
        for(auto a:s){
            mp[a]++;
            if(mp[a]==2) return a;
        }
        return 'a';
    }
};