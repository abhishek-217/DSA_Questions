class Solution {
public:
    string reverseParentheses(string s) {

        // stack<int>st;
        // for(int i=0; i<s.size(); i++){
        //     while(s[i] != ')'){
        //         st.push(s[i]);
        //         i++;
        //     }

        //     string s1 = "";

        //     while(!st.empty() && st.top() != '('){
        //         s1 += st.top();
        //         st.pop();
        //     }
        //     st.pop();

        //     for(int j=0; j<s1.size(); j++){
        //         st.push(s1[j]);
        //     }

        // }

        // string temp ="";

        // while(!st.empty()){
        //     temp += st.top();
        //     st.pop();
        // }

        // string ans ="";
        // for(int i= temp.size()-1; i>=0; i--){
        //     ans += temp[i];
        // }

        // return ans;

        stack<char> st;

        for (int i = 0; i < s.size(); i++) {

            if (s[i] != ')') {
                st.push(s[i]);
            } else {
                string temp = "";

                // Take characters until '('
                while (!st.empty() && st.top() != '(') {
                    temp += st.top();
                    st.pop();
                }

                // Remove '('
                st.pop();

                // Put reversed part back
                for (char ch : temp) {
                    st.push(ch);
                }
            }
        }

        // Get answer from stack
        string ans = "";

        while (!st.empty()) {
            ans += st.top();
            st.pop();
        }

        // Reverse because stack gives reverse order
        reverse(ans.begin(), ans.end());

        return ans;
    }
};