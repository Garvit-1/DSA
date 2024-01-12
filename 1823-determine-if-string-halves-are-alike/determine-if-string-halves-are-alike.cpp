class Solution {
public:
    bool halvesAreAlike(string s) {

        set<char> st={'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        int n=s.length();
        int a=0,b=0;
        for(int i=0;i<n/2;i++){
            if(st.count(s[i])!=0) a++;
        }
        for(int i=n/2;i<n;i++){
            if(st.count(s[i])!=0) b++;
        }

if(a==b) return true;
return false;
        
    }
};