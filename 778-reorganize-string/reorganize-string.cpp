class Solution {
public:
    bool static compareByValue(const pair<char, int>& a, const pair<char, int>& b){
        return a.second > b.second;
    }
    string reorganizeString(string s) {
        map<char,int> mp;
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
        }
        vector<pair<char, int>> sortedPairs(mp.begin(), mp.end());
        sort(sortedPairs.begin(), sortedPairs.end(), compareByValue);
        int j=0;
        auto x=sortedPairs[j];
        for(int i=0;i<s.length();i+=2){
            if(x.second==0 && j<sortedPairs.size()-1){
                j++;
                x=sortedPairs[j];
            }
            s[i]=x.first;
            x.second--;
        }
        for(int i=1;i<s.length();i+=2){
            if(x.second==0 && j<sortedPairs.size()-1){
                j++;
                x=sortedPairs[j];
            }
            s[i]=x.first;
            x.second--;
        }
        for(int i=0;i<s.length();i++){
            if(s[i]==s[i+1]){
                return "";
            }
        }
        return s;
    }
};