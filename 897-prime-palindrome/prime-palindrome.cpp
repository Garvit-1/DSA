class Solution {
public:
    bool isPrime(int n){
        for(int i=2;i*i<=n;i++){
            if(n%i==0) return false;
        }
        return true;
    }
    bool isPalin(int n){
        string s=to_string(n);
        int i=0,j=s.length()-1;
        while(i<=j){
            if(s[i]!=s[j]) return false;
            i++;j--;
        }

        return true;

    }
    int primePalindrome(int n) {
        if(n==1 || n==2) return 2;
         if (99899*1e2 <= n && n <= 1e8)
        return 100030001;

        for (long long i = n; i < 1e8; i++) {
            if (isPrime(i)) {
                if (isPalin(i)) {
                    return i;
                }
            }
        }
        return 0;
        // while(true){
        //     if(isPrime(n) && isPalin(n)) return n;
        //     n++;
        // }
    }
};