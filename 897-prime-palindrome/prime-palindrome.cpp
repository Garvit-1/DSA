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
        int i;
        if(n%2 == 0) i = n+1;
        else i=n;
        while(true){
            if(isPalin(i) && isPrime(i)) return i;
            i += 2;     
            if(i > 1e7 && i < 1e8) i = 1e8 + 1;
            if(i > 1e5 && i < 1e6) i = 1e6 + 1;
            if(i > 1e3 && i < 1e4) i = 1e4 + 1;
            if(i > 11 && i < 100) i = 101;
        }
        return -1;
    }
};
