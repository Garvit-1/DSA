class Solution {
public:
    int MOD=1e9 +7;
    int help(int m,int n,int maxMove,int i,int j,    vector<vector<vector<int>>> &dp){

        if(i>=m || j>=n || i<0 || j<0) {
            return 1;
        }
        if(maxMove==0) return 0;
        if(dp[i][j][maxMove] != -1) return dp[i][j][maxMove];
       return dp[i][j][maxMove] =( (help(m,n,maxMove-1,i+1,j,dp) +
        help(m,n,maxMove-1,i,j+1,dp))%MOD +
       ( help(m,n,maxMove-1,i-1,j,dp)+
        help(m,n,maxMove-1,i,j-1,dp))%MOD )%MOD;
    }
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {   
            vector<vector<vector<int>>> dp(m, vector<vector<int>>(n, vector<int>(maxMove+1, -1)));
        return help(m,n,maxMove,startRow,startColumn,dp);
    }
};