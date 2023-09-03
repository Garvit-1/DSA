class Solution {
public:
    int maxDepth(string s) {
        int ans=0,x=0;
        for(char a:s){
            if(a=='('){
                x++;
            }
            else if(a==')') x--;
            ans=max(ans,x);
        }
        return ans;
    }
};