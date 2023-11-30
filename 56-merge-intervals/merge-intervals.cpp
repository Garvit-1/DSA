class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        int i=1,n=intervals.size();
        vector<int> curr=intervals[0];
       vector<vector<int>> ans;
        while(i<n){
            if(intervals[i][0]<=curr[1]){
                curr[1]=max(intervals[i][1],curr[1]);

            }
            else {
                ans.push_back(curr);
                curr=intervals[i];
            }
            i++;
        }
        ans.push_back(curr);
        return ans;
    }
};