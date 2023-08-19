class Solution {
    public int findLongestChain(int[][] pairs) {
        Arrays.sort(pairs,new Comparator<int[]>(){
            @Override
            public int compare(int[] a,int[] b){
                return Integer.compare(a[1],b[1]);
            }
        });
        int n=pairs.length,ans=1;
        int[] dp=new int[n];
        dp[0]=1;
        for(int i=1;i<n;i++){
            for(int j=i-1;j>=0;j--){
                if(pairs[j][1]<pairs[i][0]) dp[i]=Math.max(dp[j]+1,dp[i]);
            }
            ans=Math.max(ans,dp[i]);
        }
        return ans;
    }
}