class Solution {
public:
    int totalMoney(int n) {
        int ans=0;
        int c;
        for(int i=0;i<n;i++){
            if(i%7 == 0){
                c = (i/7)+1;
            }
            ans+=c;
            c++;


        }
        return ans;
        
    }
};