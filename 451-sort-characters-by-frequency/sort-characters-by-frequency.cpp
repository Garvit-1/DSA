class Solution {
public:
    static bool cmp(pair<int, char> a, pair<int, char> b) {
        return a.first > b.first;
    }

    string frequencySort(string s) {
        int n = s.length();
        string ans = "";
        map<char, int> mp;
        for (auto a : s) {
            mp[a]++;
        }
        vector<pair<int, char>> v;
        for (auto a : mp) {
            v.push_back({a.second, a.first}); // Fix the order of elements in the pair
        }
        sort(v.begin(), v.end(), cmp);
        for (auto a : v) {
            cout<<a.first<<a.second;
            while (a.first--) ans += a.second;
        }
        return ans;
    }
};
