class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        // int i=0;
        if(n==1) return strs[0];
        string temp="";
        int j=0;
        while(j<strs[1].size() && j<strs[0].size() && 
            strs[1][j]==strs[0][j]){
                temp+=strs[0][j];
                j++;
        }
        for(int i=1;i<n-1;i++){
            string c="";
            int j=0;
            while(j<strs[i+1].size() && j<strs[i].size() && 
            strs[i+1][j]==strs[i][j]){
                c+=strs[i][j];
                j++;
            }
            temp=min(temp,c);
        }
        return temp;
    }
};