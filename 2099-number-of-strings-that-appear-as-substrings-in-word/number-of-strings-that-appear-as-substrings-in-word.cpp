class Solution {
public:
    int numOfStrings(vector<string>& patt, string word) {
        int count = 0;
        for(auto i : patt) {
            if(word.find(i) != -1) count++;
        }
        return count;
    }
};