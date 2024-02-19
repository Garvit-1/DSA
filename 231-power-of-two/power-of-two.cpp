class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==0 || n<0) return false;
        double a=log2(n);
        long x=a;
        double z=a-x;
        if(z>0) return false;
        return true;
    }
};