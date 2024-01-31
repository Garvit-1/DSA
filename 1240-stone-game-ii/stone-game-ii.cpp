class Solution {
public:
    int n;
    int stoneGameII(vector<int>& piles) 
    {
        n = piles.size();
        vector<int> pre(n+1, 0);
        for(int i = 1; i <= piles.size(); i++)
        {
            pre[i] = pre[i-1] + piles[i-1];
        }
        vector<vector<vector<int>>> dp(2, vector<vector<int>>(n+5, vector<int>(n+5, -1)));
        return dp_fun(dp, piles, pre, 0, 0, 1);
    }

    int dp_fun(vector<vector<vector<int>>>&dp, vector<int>&p, vector<int>&pre, int chn, int rem, int m)
    {
        if(rem >= n)
        {
            return 0;
        }
        if(dp[chn][rem][m] == -1)
        {
            dp[chn][rem][m] = 0;
            if(chn == 1)
            {
                dp[chn][rem][m] = 1e8;
            }
            for(int i = rem; i < min(n, rem + 2*m); i++)
            {
                int tkn = i-rem+1;
                //alice turn
                if(chn == 0)
                {   
                    int ext = pre[i+1] - pre[rem];
                    dp[chn][rem][m] = max(dp[chn][rem][m], dp_fun(dp, p, pre, 1, i+1, max(m, tkn))+ext);                    
                }
                else //bob turn
                {
                    dp[chn][rem][m] = min(dp[chn][rem][m], dp_fun(dp, p, pre, 0, i+1, max(m, tkn)));                    
                }
            }
        }
        return dp[chn][rem][m];
    }
};