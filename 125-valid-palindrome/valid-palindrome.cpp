class Solution {
public:
    bool isPalindrome(string s) {
        int i=0;
        string str="";
        for(auto a:s){
            if(a>='A' && a<='Z') str+=(a-'A' + 'a');
            else if(a>='a' && a<='z') str+=a;
            else if(a>='0' && a<='9') str+=a;
        }
        // cout<<str;
        int j=str.length()-1;
        while(i<=j){
            if(str[i]!=str[j]) return false;
            i++;j--;
        }
        return true;
    }
};