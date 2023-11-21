class Solution {
public:
    int rev(int n){
        int a=0;
        while(n>0){
        a=a*10 + n%10;
        n/=10;
        }
        return a;

    }
    int countNicePairs(vector<int>& nums) {
         map<int, int> numbers;

        for (int num : nums) {
            int temporaryNumber = num - rev(num);
                numbers[temporaryNumber]++;
        }
        long result = 0;
        int mod = 1000000007;
        for (const auto& entry : numbers) {
            result = (result % mod + ((long)entry.second * ((long)entry.second - 1) / 2)) % mod;
        }

        return static_cast<int>(result);
    }
};