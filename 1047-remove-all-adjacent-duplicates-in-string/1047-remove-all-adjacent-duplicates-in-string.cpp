class Solution {
public:
    string removeDuplicates(string s) {
        int n = s.size();
        stack<char>st;
        // st.push(s[n-1]);

        for(int i = n-1; i>=0; i--){
            if(st.empty()){
                st.push(s[i]);
            }else{

                if(s[i] == st.top()){
                    st.pop();
                }else{
                    st.push(s[i]);

                }
            }
        }

        string ans = "";

        while(!st.empty()){
            ans += st.top();
            st.pop();
        }

        return ans;
    }
};