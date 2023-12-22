class Solution {
public:
    int maxScore(string s) {
        int a=0,b=0,ans=0;
        for(auto x:s){
            if(x=='1') b++;
        }
        for(int i=0;i<s.length()-1;i++){
            char x=s[i];
            if(x=='1') b--;
            else a++;
            cout<<ans<<endl;
            ans=max(a+b,ans);
        }
        return ans;
    }
};