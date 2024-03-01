class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int a,b=s.length();
        a=0;
        for(int i=0;i<b;i++){
            if(s[i]=='1') a++;
            s[i]='0';
        }
        s[b-1]='1';
        for(int i=0;i<a-1;i++){
            s[i]='1';
        }

        return s;
        

        
    }
};