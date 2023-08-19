class Solution {
public:
int ans=INT_MAX;
    int help(vector<vector<int>>& triangle,int row,int col,vector<vector<int>>& dp){
        if(dp[row][col]!=-1) return dp[row][col];
        
        if(row==triangle.size()-1) {
            return dp[row][col] = triangle[row][col];
        }

        int left=help(triangle,row+1,col,dp);
        int right=help(triangle,row+1,col+1,dp);

        dp[row][col]=triangle[row][col]+min(left,right);

        return dp[row][col];
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        vector<vector<int>> dp(triangle.size(), vector<int>(triangle[triangle.size() - 1].size(), -1));
        return help(triangle,0,0,dp);
        
    }
};