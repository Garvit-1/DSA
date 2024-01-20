class Solution {
public:
void help(vector<vector<int>>& ans, vector<int>& temp,int k,int n,int i){
    if(n==0 && k==0){
        ans.push_back(temp);
        return;
    }

    if(i>n || k==0 || i>9) return;

    help(ans,temp,k,n,i+1);

    temp.push_back(i);
    help(ans,temp,k-1,n-i,i+1);
    temp.pop_back();


}
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> temp;
        help(ans,temp,k,n,1);
        return ans;
    }
};