class Solution {
public:
        vector<int> numberOfLines(vector<int>& widths, string S) {
        int res = 1, cur = 0;
        for (char c : S) {
            int width = widths[c - 'a'];
            if(cur+width <= 100) {
                cur+=width;
            }
            else{
                res++;
                cur=width;
            }
        }
        return {res, cur};
    }
};