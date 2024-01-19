class Solution {
public:
    int help(vector<vector<int>>& matrix, int i, int j,vector<vector<int>>& dp) {
        if(dp[i][j]!=INT_MAX) return dp[i][j];

        if (i == matrix.size()-1) {
            return dp[i][j]=matrix[i][j];
        }
        int l=INT_MAX,r=INT_MAX;
        if(j>0)
            l=help(matrix, i + 1, j - 1,dp);

        int s= help(matrix,i + 1, j,dp);

        if(j<matrix.size()-1)
            r=help(matrix,i + 1, j + 1,dp);

        dp[i][j]= matrix[i][j]+min(l,min(s,r));

        return dp[i][j];
    }

    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int ans=INT_MAX;
        vector<vector<int>> dp(n,vector<int>(n,INT_MAX));

        for (int i = 0; i < matrix.size(); i++) {
           ans=min(ans,help(matrix, 0, i,dp));
        }

        return ans;
    }
};
