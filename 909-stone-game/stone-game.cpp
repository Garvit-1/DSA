class Solution {
public:
    bool ans=false;
    void help(vector<int>& piles,int i,int j,int a,int b,bool turn){
            if(ans=true) return;
            if(i>=j) {
                if(a>b) ans=true;
            }
        if(turn)
        {
        help(piles,i+1,j,a+piles[i],b,!turn);
        help(piles,i,j-1,a+piles[j],b,!turn);
        }
        else {
        help(piles,i+1,j,a,b+piles[i],!turn);
        help(piles,i,j-1,a,b+piles[j],!turn);
        }
    }
    bool stoneGame(vector<int>& piles) {
        int i=0;int j=piles.size()-1;
        help(piles,i,j,0,0,true);
        return ans;
    }
};