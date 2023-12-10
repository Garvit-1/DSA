class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int m=matrix.size();
        // if(m==0) return [][];
        int n=matrix[0].size();
        vector<vector<int>> ans(n,vector<int>(m,0));
        for(int i=0;i<ans.size();i++){
            for(int j=0;j<ans[i].size();j++){
                ans[i][j]=matrix[j][i];
            }
        }
        return ans;
    }
};