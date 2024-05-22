class Solution {
public:
    bool ispalin(string& s, int i, int j) {
        while (i <= j) {
            if (s[i] != s[j]) return false;
            i++;
            j--;
        }
        return true;
    }

    void help(vector<vector<string>>& ans, int l, vector<string>& v, string& s) {
        if (l >= s.length()) {
            ans.push_back(v);
            return;
        }

        for (int i = l; i < s.length(); i++) {
            if (ispalin(s, l, i)) {
                string currStr = s.substr(l, i - l + 1);
                v.push_back(currStr);
                help(ans, i + 1, v, s);
                v.pop_back();
            }
        }
    }

    vector<vector<string>> partition(string& s) {
        vector<vector<string>> ans;
        vector<string> v;
        help(ans, 0, v, s);
        return ans;
    }
};
