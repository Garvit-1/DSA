class Solution {
public:
    bool closeStrings(string w1, string w2) {
        if(w1.length() != w2.length()){
            return false;
        }
        unordered_set<char>holder;
        vector<int> occurances1(26, 0), occurances2(26, 0);
        for(int i=0;i<w1.length();i++){
            holder.insert(w1[i]);
            occurances1[ (int)w1[i] - 97 ]++;
        }
        for(int i=0;i<w2.length();i++){
            holder.erase(w2[i]);
            occurances2[ (int)w2[i] - 97 ]++;
        }

        // if the set is not empty then we have different chars 
        if(!holder.empty()){
            return false;
        }
        // to check if we have some chars occuring same number of rimes number we sort
        sort(occurances1.begin(), occurances1.end());
        sort(occurances2.begin(), occurances2.end());
        
        for(int i=0;i<26;i++){
            if(occurances1[i] != occurances2[i]){
                return false;
            }
        }
        return true;
    }
};