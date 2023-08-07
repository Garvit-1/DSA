class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {      vector<int> ans;
        int n=A.size();
        map<int,int> m1;
        for(int i=0;i<n;i++){
            int curr=0;
            m1[A[i]]++;
            m1[B[i]]--;
            for(auto a:m1){
                if(a.second==0) curr++;
            }
            ans.push_back(curr);
        }
        return ans;
    }
};