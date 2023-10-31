class Solution {
public:
    vector<string> ans;
    void help(vector<string>& chars,int i,string digits,string curr){
        if(i==digits.size()){
        ans.push_back(curr);
        return;
        } 
        int c=digits[i]-'0';
        for(int j=0;j<chars[c-2].size();j++){
        curr+=chars[c-2][j];
        help(chars,i+1,digits,curr);
        curr.pop_back();
        }

    }
    vector<string> letterCombinations(string digits) {
        if(digits.size()==0) return ans;
        vector<string> chars={"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        help(chars,0,digits,"");

        return ans;

    }
};