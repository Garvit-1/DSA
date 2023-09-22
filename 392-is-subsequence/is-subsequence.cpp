class Solution {
public:
    bool isSubsequence(string t, string s) {
        int i=0,j=0;
        while(i!=s.size())
        {
            if(s[i]==t[j]){
                i++;j++;
            }
            else i++;

        }

        if(j==t.size()) return true;
        return false;
    }
};