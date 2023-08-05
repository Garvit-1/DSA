class Solution {
public:
int ans=0;
bool vis[21][21];
void solve(vector<vector<int>>& grid,int i,int j,int count){
    if(i>=grid.size() || i<0 || j>=grid[0].size() || j<0 ) return;

    if(grid[i][j]==-1 || vis[i][j]==true ) return;

    if(grid[i][j]==2){
    if(count==0){
    ans++;
    }
    return;
    } 
    vis[i][j]=true;
    solve(grid,i+1,j,count-1);
    solve(grid,i,j+1,count-1);
    solve(grid,i-1,j,count-1);
    solve(grid,i,j-1,count-1);
    vis[i][j]=false;
  
}
    int uniquePathsIII(vector<vector<int>>& grid) {
        int s,e,c=1;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j]==1){
                s=i;e=j;
                } 
                else if(grid[i][j]==0) c++;
            }
        }
        solve(grid,s,e,c);
        return ans;
    }
};