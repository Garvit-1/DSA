class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int> l(n),r(n);
        int c=INT_MIN;
        for(int i=0;i<n;i++){
            c=max(c,height[i]);
            l[i]=c;
        }
        c=INT_MIN;
        for(int i=n-1;i>=0;i--){
            c=max(c,height[i]);
            r[i]=c;
        }
    int ans=0;
        for(int i=0;i<n;i++){
        ans+= min(l[i],r[i])-height[i];
        }
        return ans;
    }
};