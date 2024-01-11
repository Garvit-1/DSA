class Solution {
public:
    string convert(string s, int numRows) {
        vector<string> v(numRows);
        if(numRows<=1) return s;
        int i=0,j=0;
        bool flag=true;
        while(i<s.length()){
            string x=v[j];
            x+=s[i];
            v[j]=x;
            i++;
            if(flag){
                j++;
            }
            else j--;
            if(j==numRows-1 || j==0) flag=!flag;
            
        }
        string ans="";
        for(auto a:v) ans+=a;
        return ans;
    }
};