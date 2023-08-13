class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(),points.end());
        int mini=points[0][0];
        int maxi=points[0][1];
        int ans=0;
        for(int i=1;i<points.size();i++){
            if(points[i][0]<=maxi){
                mini=max(points[i][0],mini);
                maxi=min(points[i][1],maxi);
            }
            else {
                ans++;
                mini=points[i][0];
                maxi=points[i][1];
            }
        }

        return ans+1;
    }
};