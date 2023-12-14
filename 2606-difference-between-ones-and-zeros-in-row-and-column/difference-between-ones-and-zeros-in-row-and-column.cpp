class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<int> v1(m),v2(n);
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    v1[i]++;
                    v2[j]++;
                }
            }
        }

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int x=v1[i]+v2[j];
                x*=2;
                x-=(m+n);
                grid[i][j]=x;
            }
        }
        return grid;

        
    }
};