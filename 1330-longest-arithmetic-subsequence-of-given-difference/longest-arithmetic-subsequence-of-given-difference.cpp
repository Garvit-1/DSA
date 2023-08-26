class Solution {
public:
    int longestSubsequence(vector<int>& arr, int difference) 
    {
        unordered_map<int,int> lengths;
        int result=1;
        for(int &i:arr)
            result=max(result,lengths[i]=1+lengths[i-difference]); 
        return result;
    // int ans=1;
    //     for(int i=0;i<arr.size();i++){
    //         int cur=arr[i];
    //         int a=1;
    //         for(int j=i+1;j<arr.size();j++){
    //             if(arr[j] - cur == difference){
    //                 a++;
    //                 cur=arr[j];
    //             }
    //         }
    //         ans=max(a,ans);
    //     }

    //     return ans;
    
    

    }
};