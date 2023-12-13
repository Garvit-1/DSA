class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        vector<int> a(mat.size()),b(mat[0].size());
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                if(mat[i][j]==1){

                a[i]++;b[j]++;
                }
            }
        }
        int ans=0;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                if(mat[i][j]==1 && a[i]==1 && b[j]==1) ans++;
            }
        }
        return ans;
    }
};