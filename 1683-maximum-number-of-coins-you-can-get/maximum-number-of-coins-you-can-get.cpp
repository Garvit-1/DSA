class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(),piles.end());
        int i=0,j=piles.size()-1;
        int ans=0;
        while(i<j){
            ans+=piles[j-1];
            i++;
            j-=2;

        }
        return ans;

    }
};