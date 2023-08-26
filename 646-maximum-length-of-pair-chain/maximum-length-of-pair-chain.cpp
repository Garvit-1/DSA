class Solution {
public:
static bool comp(vector<int>& a,vector<int>& b){
    return a[1]<b[1];
}
    int findLongestChain(vector<vector<int>>& pairs) {
        sort(pairs.begin(),pairs.end(),comp);
        int ans=0;
        // for(auto a:pairs) cout<<a[0]<<" "<<a[1];
        for(int i=0;i<pairs.size();i++){
            int cure=pairs[i][1];
            int cur=1;
            for(int j=i+1;j<pairs.size();j++){
                if(cure<pairs[j][0]){
                    cur++;
                    cure=pairs[j][1];
                }
            }
            if(cur>ans) ans=cur;
        }
        return ans;
    }
};