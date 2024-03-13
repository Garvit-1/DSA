class Solution {
public:
    int pivotInteger(int n) {
        int a=0;
        for(int i=1;i<=n;i++) a+=i;
        int b=n;
        for(int i=n;i>=0;i--){
            if(a==b) return i;
            a-=i;
            b+=i-1;
        }
        return -1;


    }
};