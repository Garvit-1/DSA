class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        stack<int> st; 
        vector<string> ans;
        int x=1;
        int i=0;
        while(i!=target.size()){
            if(target[i]==x){
            ans.push_back("Push");
            i++;
            }
            else{
                ans.push_back("Push");
                ans.push_back("Pop");
            }
            x++;
        }

        return ans;
    }
};