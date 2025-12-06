class Solution {
public:
    string clearDigits(string s) {

        // stack<int>st;

        // for(int i= s.size()-1; i>=0; i--){
        //     if(st.empty()){
        //         st.push(s[i]);
        //     }else{
        //         if(isdigit(st.top()) && (('a' <= s[i]) <= 'z')){
        //             st.pop();
        //         }else{
        //             st.push(s[i]);
        //         }
        //     }
        // }

        // string ans = "";
        // while(!st.empty()){
        //     ans += st.top();
        //     st.pop();
        // }

        // return ans;

        stack<char> st;

        for (char c : s) {
            if (isdigit(c)) {
                // Remove the closest non-digit to the left
                if (!st.empty() && !isdigit(st.top())) {
                    st.pop();
                }
            } else {
                st.push(c);
            }
        }

        // Build result from stack
        string result;
        while (!st.empty()) {
            result = st.top() + result;
            st.pop();
        }

        return result;
    }
};