class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int m1=INT_MAX;
        int m2=INT_MAX;

        for(auto a:prices){
            if(a<=m1){
                m2=m1;
                m1=a;
            }
            else if(a<=m2){
                m2=a;
            }
            cout<<m1<<m2<<endl;
        }
        int ans=money-m1-m2;
        if(ans<0) return money;

        return ans;
    }
};