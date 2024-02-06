class Solution {
public:
    void help(int i,int j,int color,int x,vector<vector<int>>& image,
    vector<vector<int>> &ans){
        if(i>=image.size() || j>=image[0].size()
        ||i<0 || j<0) return;
        if(ans[i][j]==color) return;
        if(image[i][j]==x) ans[i][j]=color;
        else return;
        help(i+1,j,color,x,image,ans);
        help(i-1,j,color,x,image,ans);
        help(i,j+1,color,x,image,ans);
        help(i,j-1,color,x,image,ans);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        vector<vector<int>>ans = image;
        int x=image[sr][sc];
        if(x==color) return ans;

        help(sr,sc,color,x,image,ans);
        return ans;


    }
};