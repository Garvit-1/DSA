class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> ans;
        for(int i=0;i<arr2.size();i++){
            for(int j=0;j<arr1.size();j++){
                if(arr1[j]==arr2[i]){
                    ans.push_back(arr1[j]);
                    arr1[j]=-1;
                }
            }
        }
        priority_queue<int,vector<int>,greater<int>> pq;
        for(auto a:arr1) {
            if(a!=-1) pq.push(a);
        }
        while(!pq.empty()){
            ans.push_back(pq.top());
            pq.pop();
        }
        return ans;

    }
};