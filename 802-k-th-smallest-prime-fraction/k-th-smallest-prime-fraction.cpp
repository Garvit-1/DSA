class Solution {
public:
    static bool cmp(pair<int,int> a, pair<int,int> b) {
        return (a.first * b.second) > (a.second * b.first);
    }
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        priority_queue<pair<int,int>, vector<pair<int,int>>, decltype(&cmp)> pq(&cmp);
        int n=arr.size();
        for(int i=0;i<n-1;i++){
            for(int j=n-1;j>i;j--){
                pq.push({arr[i],arr[j]});
            }
        }
        while(k>1){
            k--;
            pq.pop();
        }
        return {pq.top().first,pq.top().second};
    }
};