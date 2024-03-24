 bool cmp(int a,int b){
        return to_string(a)+to_string(b)>to_string(b)+to_string(a);
    }
class Solution {
public:
   
    string largestNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end(),cmp);
        string ans="";
        for(auto a:nums) ans+=to_string(a);
        if(ans[0]=='0') return "0";
        return ans;
    }
};