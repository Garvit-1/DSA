class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        vector<vector<int>> dp(triangle.size(), vector<int>(triangle[triangle.size() - 1].size(), -1));
        return help(triangle, 0, 0, dp);
    }

    int help(vector<vector<int>>& triangle, int row, int col, vector<vector<int>>& dp) {
        if (dp[row][col] != -1) {
            return dp[row][col];
        }

        // Base case: If we are at the bottom row, return the value in the triangle.
        if (row == triangle.size() - 1) {
            return dp[row][col] = triangle[row][col];
        }

        // Calculate the minimum path sum recursively.
        int left = help(triangle, row + 1, col, dp);
        int right = help(triangle, row + 1, col + 1, dp);

        // Store the result in the memoization table.
        return dp[row][col] = triangle[row][col] + min(left, right);
    }
};
