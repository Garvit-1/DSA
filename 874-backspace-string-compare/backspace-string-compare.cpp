class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st; string a="",b="";
        for(int i=0;i<s.length();i++){
            if(s[i]>='a' && s[i]<='z') st.push(s[i]);
            else if(!st.empty()) st.pop();
        }
        while(!st.empty()) {
            a+=st.top();
            st.pop();
        }

        for(int i=0;i<t.length();i++){
            if(t[i]>='a' && t[i]<='z') st.push(t[i]);
            else if(!st.empty()) st.pop();
        }
        while(!st.empty()) {
            b+=st.top();
            st.pop();
        }

        return a==b;
    }
};