class Solution {
public:
    int minInsertions(string s) {
         int open = 0, ans = 0;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') open++;
            else {
                
                if (i + 1 < s.size() && s[i + 1] == ')') i++;
                else ans++;

                
                if (open > 0) open--;
                else ans++;
            }
        }

        return ans + open * 2;
        
        // stack<char>st;
        // int ans =0;

        // int n= s.size();
        // int out =0;

        // for(int i=0; i<n-1; i++){
        //     if(s[i] == '('){
        //         st.push(s[i]);
        //     }else{
        //         out++;
        //     }

        //     if(!st.empty() && s[i] == ')'){
        //         if(s[i+1] == ')'){
        //             st.pop();
        //         }else{
        //             ans++;
        //         }
        //     }
        // }

        // return ans;
    }
};