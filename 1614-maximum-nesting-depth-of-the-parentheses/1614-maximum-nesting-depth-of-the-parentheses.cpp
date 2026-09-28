class Solution {
public:
    int maxDepth(string s) {

        int n = s.size();
        int count =0;
        stack<char>st;

        // int i=0;
        // st.push(s[0]);

        // while(i<n && !st.empty()){

        // }

        for(char c: s){
            if( c == '('){
                st.push('(');
            }else if(c == ')'){
                st.pop();
            }

            count = max(count, (int)st.size());
        }

        return count;
    }
};