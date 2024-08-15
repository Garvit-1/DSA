class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        vector<int> v(3);
        for(auto a:bills){
            if(a==20){
                if(v[1]>0 && v[0]>0){
                    v[1]--;
                    v[0]--;
                }
                else if(v[1]==0 && v[0]>2) v[0]-=3;
                else return false;
                v[2]++;
            }
            else if(a==10){
                if(v[0]>0) v[0]--;
                else return false;
                v[1]++;
            }
            else v[0]++;
        }
        return true;
        
    }
};