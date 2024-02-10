class Solution {
public:
    bool palin(string s){
        int i=0,j=s.length()-1;
        while(i<j){
            if(s[i]!=s[j]) return false;
            i++;j--;
        }
        return true;
    }
    int countSubstrings(string s) {
        int ans=0,n=s.length();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<=n;j++){
                if(palin(s.substr(i,j-i))) ans++;
            }
        }
        return ans;
        
    }
};