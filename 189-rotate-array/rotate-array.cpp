class Solution {
public:
    void rotate(vector<int>& nums, int k) {

        int n=nums.size();
        if(n==1) return;
        k=k%n;
        int a=n-k-1;

        int i=0;int j=a;
        while(i<j) swap(nums[i++],nums[j--]);
        i=a+1;j=n-1;
        while(i<j) swap(nums[i++],nums[j--]);

        i=0;j=n-1;
        while(i<j) swap(nums[i++],nums[j--]);
        
    }
};