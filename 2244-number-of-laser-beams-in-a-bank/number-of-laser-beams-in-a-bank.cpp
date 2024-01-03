class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        vector<int> v;
        for(int i=0;i<bank.size();i++){
            int n=0;
            for(int j=0;j<bank[i].size();j++){
                if(bank[i][j]=='1') n++;
            }
            if(n>0)
            v.push_back(n);
        }
        int sum=0;
        for(int i=1;i<v.size();i++){
            sum+=v[i]*v[i-1];
        }
    return sum;
    }
};