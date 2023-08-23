class Solution {
public:

    int help(vector<vector<int>>& grid,int i,int j,vector<vector<int>> &dp){
        if(i>=grid.size() || j>=grid[0].size())
        return 1000;

        if(dp[i][j]!=-1) return dp[i][j];
        if(i==grid.size()-1 && j==grid[0].size()-1) 
        return dp[i][j]=grid[i][j];

 return dp[i][j]=grid[i][j] + min(help(grid,i+1,j,dp),
        help(grid,i,j+1,dp));
    }
    int minPathSum(vector<vector<int>>& grid) {
        vector<vector<int>> dp(grid.size(),vector<int>(grid[0].size(),-1));
        return help(grid,0,0,dp);
    }
};