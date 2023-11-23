class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {

        vector<bool> ans;

        for(int i=0;i<l.size();i++){
        vector<int> temp;
            for(int j=l[i];j<=r[i];j++){
                temp.push_back(nums[j]);
            }
            sort(temp.begin(),temp.end());
                bool flag=true;
                int x=temp[1]-temp[0];
            for(int j=1;j<temp.size()-1;j++){
                if(temp[j+1]-temp[j]!=x) {flag=false;break;}
            }
            ans.push_back(flag);
        }

        return ans;
        
    }
};