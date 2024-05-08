class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        priority_queue<pair<int, int> > pq;
        vector<string> ans(score.size());
        for(int i=0;i<score.size();i++) pq.push({score[i],i});
        int j=1;
        while(!pq.empty()){
            auto a=pq.top();
            pq.pop();
            ans[a.second]=to_string(j);
            j++;
        }
        for(int i=0;i<ans.size();i++){
            if(ans[i]=="1") ans[i]="Gold Medal";
            if(ans[i]=="2") ans[i]="Silver Medal";
            if(ans[i]=="3") ans[i]="Bronze Medal";
        }
        return ans;
    }
};