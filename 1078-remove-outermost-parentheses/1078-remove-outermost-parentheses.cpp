class Solution {
public:
    string removeOuterParentheses(string s) {
        string re = "";

        int de =0;
        for(char c :s){
           if(c == '(' && de++ >0){
            re.push_back(c);
           }
           if(c == ')' && de-- >1){
            re.push_back(c);
           }
           
        }

        return re;

        // stack<char>st;
        // string re = "";
        // int count=0;
        // for(char c : s){
        //     if(c == '(' && count++ >0 ) {
        //         st.push(c);
        //         // count++;
        //     }
        //     else{
        //         if(!st.empty() && st.top() == '(' && c == ')'){
        //             re.push_back(st.top());
        //             re.push_back(c);
        //         }
        //     }
        // }

        // return re;
    }
};
