class Solution {
public:
    int hIndex(vector<int>& citations) {
        int ans=0,n=citations.size();
        int c=0;
        for(int i=0;i<n;i++){
            if(citations[i]>=n-i) {ans=n-i;break;}
        }
        return ans;
    }
};