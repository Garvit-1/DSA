class Solution
{
    public:
        int countOrders(int n)
        {
            long long MOD = 1e9 + 7, ans(1);
            for (int i = 1; i <= 2 * n; i += 2)
            {
                ans = (ans *i *(i + 1) / 2) % MOD;
            }
            return (int) ans;
        }
};