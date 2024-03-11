class Solution {
public:
    string customSortString(string order, string s) {
        int n=s.length();
        map<char,int> mp;
        for(auto a:order){
            mp[a]=n;
            n--;
        }
        for(int i=0;i<s.length()-1;i++){
            for(int j=i+1;j<s.length();j++){
                if(mp[s[i]]<mp[s[j]]) swap(s[i],s[j]);
            }
        }
        return s;

        
    }
};