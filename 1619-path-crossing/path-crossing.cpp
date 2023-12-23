class Solution {
public:
    bool isPathCrossing(string path) {
        vector<pair<int,int>> vis;
        int x=0,y=0;
        vis.push_back({0,0});
        for(auto a:path){
            switch(a){
                case 'N':
                    y++;
                    break;
                case 'S':
                    y--;
                    break;
                case 'E':
                    x--;
                    break;
                case 'W':
                    x++;
                    break;
            } 
            for(auto a:vis){
                if(a.first==x && a.second==y) return true;
            }
            vis.push_back({x,y});
        }
        return false;
    }
};