class Solution {
public:
    string convert(string s, int n) {
        vector<string> v(n,"");
        int i=0;bool flag=true;
        if(n==1) return s;
        for(auto a:s){
            v[i]+=a;
            if(flag) {
                if(i==n-1){
                    flag=!flag;
                    i--;
                }
                else i++;
            }
            else{ 
                if(i==0){
                flag=!flag;
                i++;
                }
                else i--;
            }
        }
        string ans="";
        for(auto a:v) ans+=a;
        return ans;
        
        
    }
};