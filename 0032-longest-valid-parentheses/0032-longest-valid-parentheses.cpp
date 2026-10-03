class Solution {
public:

    int longestValidParentheses(string s) {
        int count=0;

        int o=0,c=0;

        for(int i=0; i<s.size(); i++){
            if(s[i] == '('){
                o++;
            }else{
                c++;
            }

            if(c==o){
                count = max(count , 2*c);
            }
            if(c > o){
                c=o=0;
            }
        }

        c=o=0;

        for(int i=s.size()-1; i>=0; i--){
            if(s[i] == '('){
                o++;
            }else{
                c++;
            }

            if(c==o){
                count = max(count , 2*o);
            }
            if(c < o){
                c=o=0;
            }
        }

        return count;
        
    }
};