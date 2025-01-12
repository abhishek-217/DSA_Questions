class Solution {
public:
    bool canBeValid(string s, string loc) {
        // stack<char>s1;

        if(s.size() % 2 != 0){
            return false;
        }
        // for(int i=0; i<s.size(); i++){
        
        //     if(s1.empty()){
        //         if(s[i] == '('){

        //             s1.push(s[i]);
        //         }else{
        //             if(loc[i] == '0'){
        //                 s1.push('(');
        //             }else{
        //                 return false;
        //             }
        //         }
        //     }else{
        //         if(s1.top() == '('){
        //             if(s[i] == ')'){
        //                 s1.pop();
        //             }else{
        //                 if(loc[i] == '0'){
        //                     s1.pop();
        //                 }else{
        //                     return false;
        //                 }
        //             }
        //         }

        //     }

        // }
        // return s1.empty();
        
        int open =0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(' || loc[i] == '0') {
                open++;
            } else {
                open--;
            }

            if (open < 0){
                return false;
            }
        }
    

        int close = 0;
  
        for (int i = s.size() - 1; i >= 0; i--) {
            if (s[i] == ')' || loc[i] == '0') {
                close++;
            } else {
                close--;
            }

            if (close < 0) {
                return false;
            }
        }

       
        return true;

    }
};