class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<=0) return 0;
        
        for(int i=0;pow(3,i)<=n;i++){
            if(pow(3,i)==n) return true;
        }
        return false;
        // if(n==0) return false;
        // if(n==1) return true;
        // long long a= log2(n) / log2(3);
        // if(a==(log2(n)/log2(3))){
        //     return true;
        // }
        // return false;
    }
};