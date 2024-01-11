class Solution {
public:
    int ans = 0;

    // void help(string text1, string text2, int i, int j, int temp, vector<vector<int>>& dp) {
    //     if (i < 0 || j < 0) {
    //         return;
    //     }
    //     if (dp[i][j] != 0) {
    //         return;
    //     }

    //     if (text1[i] == text2[j]) {
    //         temp++;
    //         ans = max(temp, ans);
    //         dp[i][j] = temp;
    //         help(text1, text2, i - 1, j - 1, temp, dp);
    //     } else {
    //         dp[i][j] = temp;
    //         help(text1, text2, i - 1, j, temp, dp);
    //         help(text1, text2, i, j - 1, temp, dp);
    //     }
    // }

    int longestCommonSubsequence(string text1, string text2) {
        vector<vector<int>> dp(text1.length()+1, vector<int>(text2.length()+1, 0));
    int n=text1.length();
    int m=text2.length();
    if(text1[0]==text2[0]) dp[1][1]=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(text1[i-1]==text2[j-1]){
                dp[i][j]=1+dp[i-1][j-1];
            }
            else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        }
    }
        // help(text1, text2, text1.length() - 1, text2.length() - 1, 0, dp);
        
        return dp[n][m];
    }
};



