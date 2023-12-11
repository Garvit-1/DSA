class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        // unordered_map<int,int> mp;
        int n=arr.size();
        if(n==1) return arr[0];
        int c=1;
        for(int i=0;i<n-1;i++){
            if(arr[i]==arr[i+1]) c++;
            else c=1;

           if(c>n/4) return arr[i];           
        }
        return 0;
    }
};