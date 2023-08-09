class Solution {
public:
    int minimizeMax(vector<int>& v, int p) {
       sort(v.begin(),v.end());
       int n = v.size();
       int ans = v[n-1]-v[0];//Max difference between 2 elements
       int i=0,j=ans;
       while(i<=j){
           int m = (i+j)/2;
           int total = 0;
           int k = 0;
           while(k < n-1){
               if(v[k+1]-v[k]<=m){    //searching all consecutive enteries
                   total++;
                   k+=2;
               }
               else k++;
           }
           if(total>=p){ // if i have more pairs than required i will restrict 
               ans = m;
               j = m-1;
           }
           else i = m+1; // if not i will expand my range
       }
       return ans;
    }
};