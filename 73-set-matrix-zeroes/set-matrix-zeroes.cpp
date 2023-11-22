class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        set<int> s1,s2;
        int m=matrix.size(),n=0;
        if(m>0)
        n=matrix[0].size();

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0) {
                s1.insert(i);
                s2.insert(j);
                }
            }
        }
        for(auto a:s1){
            for(int i=0;i<n;i++)
                matrix[a][i]=0;
        }
        for(auto a:s2){
            for(int i=0;i<m;i++)
                matrix[i][a]=0;
        }
            
    }
};