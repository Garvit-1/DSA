class Solution {
public:
    bool palindrome(string s){
        int n=s.length();
        for(int i=0,j=n-1;i<=j;i++,j--){
            if(s[i]==s[j]) continue;
            else return false;
        }
        return true;
    }
    string firstPalindrome(vector<string>& words) {
        for(string a:words){           
            if(palindrome(a)) return a;
        }
        return "";
    }
};