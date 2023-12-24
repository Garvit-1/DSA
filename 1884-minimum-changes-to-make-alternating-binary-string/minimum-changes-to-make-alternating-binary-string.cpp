class Solution {
public:
    int minOperations(string s) {
        int c=0,n=s.length();
        for(int i=0;i<n;i++){
            if(s[i]==s[i+1]){
                c++;
                if(s[i+1]=='0') s[i+1]='1';
                else if(s[i+1]=='1') s[i+1]='0';
            }
        }
        return min(c,n-c);
    }
};