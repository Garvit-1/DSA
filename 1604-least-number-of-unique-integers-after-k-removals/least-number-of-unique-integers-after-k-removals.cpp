class Solution {
public:
    bool cmp(pair<int,int> p1,pair<int,int> p2){
        return p1.first<p2.first;
    }
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int,int> mp;
        for(auto a:arr) mp[a]++;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        for(auto a:mp) {pq.push({a.second,a.first});}
        while(k--){
            auto a=pq.top();
            pq.pop();
            a.first--;
            // cout<<a.first<<" "<<a.second<<endl;
            if(a.first) pq.push(a);
        }
        return pq.size();

    }
};