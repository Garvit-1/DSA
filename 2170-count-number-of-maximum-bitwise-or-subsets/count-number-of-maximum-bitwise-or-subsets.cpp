class Solution {
public:
vector<int> v;

void subs(vector<int>& nums,int i,vector<int> curr){
    if(i>=nums.size()){
        int x=0;
        for(auto a:curr) x|=a;
        v.push_back(x);
    return;
    } 
    subs(nums,i+1,curr);
    curr.push_back(nums[i]);
    subs(nums,i+1,curr);
    curr.pop_back();
}
    int countMaxOrSubsets(vector<int>& nums) {
        subs(nums,0,{});
        sort(v.rbegin(),v.rend());
        int ans=1;
        for(int i=0;i<v.size();i++){
            if(v[i]!=v[i+1]) break;
            else ans++;
        }
        return ans;
    }
};