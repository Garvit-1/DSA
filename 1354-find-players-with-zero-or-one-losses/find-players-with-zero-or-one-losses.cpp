class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
       vector<vector<int>> ans(2);
       map<int,int> win,los;
       for(auto a:matches){
           win[a[0]]++;
           los[a[1]]++;
       }
       for(auto a:los) {
        //    if(los[a.first]==0) ans[0].push_back(a.first);
           if(los[a.first]==1) ans[1].push_back(a.first);
       }
       for(auto a:win) {
           if(los[a.first]==0) ans[0].push_back(a.first);
        //    if(los[a.first]==1) ans[1].push_back(a.first);
       }
       return ans;
    }
};