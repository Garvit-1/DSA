class Solution {
public:
    int findChampion(vector<vector<int>>& grid) {
        for(int i=0;i<grid.size();i++){
            vector<int> a=grid[i];
            int x=0;
            for(auto b:a){
                if(b==1) x++;

            }
            if(x==grid.size()-1) return i;
        }

        return -1;
    }
};