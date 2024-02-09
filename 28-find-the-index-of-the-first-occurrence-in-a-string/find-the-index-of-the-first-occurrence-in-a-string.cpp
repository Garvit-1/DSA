class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=needle.length();
        int i=0;
        while(i!=haystack.length()){
            if(haystack[i]==needle[0]){
                if(haystack.substr(i,n)==needle) return i;
            }
            i++;
        }
        return -1;
    }
};