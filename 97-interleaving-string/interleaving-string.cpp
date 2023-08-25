class Solution {
public:
     


    bool help(string s1, string s2, string s3,vector<vector<vector<int>>> &dp,int i=0,int j=0,int k=0){
        if(dp[i][j][k]!=-1) return dp[i][j][k];
        if(k==s3.size()) return dp[i][j][k] = true;
        if(dp[i][j][k]!=-1)
        return dp[i][j][k];

        if(s1[i]==s2[j] && s1[i]==s3[k]){
            return dp[i][j][k] = help(s1,s2,s3,dp,i+1,j,k+1) || help(s1,s2,s3,dp,i,j+1,k+1)  ;
        }

        else if(i<s1.size() && s1[i]==s3[k]){
            return dp[i][j][k] = help(s1,s2,s3,dp,i+1,j,k+1);
        }

        else if(j<s2.size() && s2[j]==s3[k]){
            return dp[i][j][k] = help(s1,s2,s3,dp,i,j+1,k+1);
        }

        return false;

    }
    bool isInterleave(string s1, string s2, string s3) {
        if(s1.size()+s2.size() !=s3.size()) return false;
        vector<vector<vector<int>>> dp(s1.length()+1, vector<vector<int>>(s2.length()+1, vector<int>(s3.length()+1,-1)));
        return help(s1,s2,s3,dp);

    }
};