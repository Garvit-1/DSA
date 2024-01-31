class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        int n=temp.size();
        vector<int> ans(n,0);
        stack<int> st;
        for(int i=n-1;i>=0;i--){
            if(st.empty()){
                st.push(i);
                ans[i]=0;
            }
            else{
                while(!st.empty() && temp[st.top()]<=temp[i])
                {
                    st.pop();
                }

                if(st.empty()){
                    ans[i]=0;
                }
                else ans[i]=st.top()-i;
                st.push(i);
            }
        }
        return ans;
        
    }
};

// class Solution {
// public:
//     vector<int> dailyTemperatures( vector<int>& temperatures) {
//         deque<int> deque;
        
//         vector<int> res(temperatures.size(), 0);

//         for (int i = temperatures.size() - 1; i >= 0; --i) {
//             if (deque.empty()) {
//                 deque.push_front(i);
//                 res[i] = 0;
//             } else {
//                 while (!deque.empty() && temperatures[i] >= temperatures[deque.front()]) {
//                     deque.pop_front();
//                 }

//                 if (deque.empty()) {
//                     res[i] = 0;
//                 } else {
//                     res[i] = deque.front() - i;
//                 }

//                 deque.push_front(i);
//             }
//         }

//         return res;
//     }
// }; 






// class Solution {
// public:
//     vector<int> dailyTemperatures(vector<int>& temperatures) {
//         vector<int> result(temperatures.size(), 0);
//         vector<int> stack;

//         for (int i = temperatures.size() - 1; i >= 0; --i) {
//             int currTemperature = temperatures[i];

//             while (!stack.empty() && currTemperature >= temperatures[stack.back()]) {
//                 stack.pop_back();
//             }

//             if (!stack.empty()) {
//                 result[i] = stack.back() - i;
//             }

//             stack.push_back(i);
//         }

//         return result;
//     }
// };

