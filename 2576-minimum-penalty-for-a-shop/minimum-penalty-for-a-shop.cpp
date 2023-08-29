class Solution {
public:
    int bestClosingTime(string customers) {
        int n=customers.size();
        int cur=0;
        int a=0,b=0;
        for(int i=0;i<n;i++){
            if(customers[i]=='Y'){
                cur+=1;
            }
            else cur-=1;
            cout<<cur<<" ";
            if(cur>a){
                a=cur;
                b=i;
            }
        }
        return (b==0 && customers[0]=='N') ? b : b+1;
    }
};