class Solution {
public:
    int maxDepth(string s) {
        stack<char> st;
        int ans=0;
        for(auto a:s){
            if(a=='(') st.push(a);
            else if(a==')') st.pop();
            int z=st.size();
            ans=max(ans,z);
        }
        return ans;
    }
};