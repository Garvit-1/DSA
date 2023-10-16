class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> v(rowIndex+1);
        v[0].push_back(1);
        for(int i=0;i<=rowIndex;i++){
            v[i].resize(i+1,1);
            for(int j=1;j<i;j++) v[i][j]=v[i-1][j-1]+v[i-1][j];
        }
        return v[rowIndex];
    }
};