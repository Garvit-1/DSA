class Solution {
public:
    string decodeString(string s) {
        stack<char> st;
        string ans = "";
        string c = "";

        for (int i = 0; i < s.length(); i++) {
            if (s[i] != ']') {
                st.push(s[i]);
            } else {
                while (st.top() != '[') {
                    c = st.top() + c;
                    st.pop();
                }
                st.pop();

                // Extract the number of repetitions (could be more than one digit).
                string num_str = "";
                while (!st.empty() && isdigit(st.top())) {
                    num_str = st.top() + num_str;
                    st.pop();
                }

                int x = stoi(num_str); // Convert the string to an integer.
                string temp = ""; // Separate string to store the repeated substring.

                for (int i = 0; i < x; i++) {
                    temp += c; // Concatenate the repeated substring.
                }

                // Push the characters of 'temp' back to the stack.
                for (char ch : temp) {
                    st.push(ch);
                }

                c = "";
            }
        }

        // Concatenate the final result by prepending the characters from the stack.
        while (!st.empty()) {
            ans = st.top() + ans;
            st.pop();
        }

        return ans;
    }
};
