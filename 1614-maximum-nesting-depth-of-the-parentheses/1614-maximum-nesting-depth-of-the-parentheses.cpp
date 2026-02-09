class Solution {
public:
    int maxDepth(string s) {
        
        stack<char>st;

        int res =0;

        for(char c: s){
            if(c == '('){
                st.push('(');
            }else if(c == ')'){
                st.pop();
            }

            res = max(res, (int)st.size());
        }

        return res;
    }
};