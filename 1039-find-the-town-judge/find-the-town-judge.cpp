class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        map<int,int> mp1,mp2;
        for(auto a:trust){
            mp1[a[0]]++;
            mp2[a[1]]++;
        }

        for(int i=0;i<n;i++){
            if(mp1[i+1]==0 && mp2[i+1]==n-1) return i+1;
        }
        return -1;
        
    }
};