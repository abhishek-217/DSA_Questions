class Solution {
public:
    bool isValid(string s) {
        int slen = s.size();

        stack<char>sta;
        for(int i =0; i<slen; i++){
            if(s[i] == '('  || s[i] == '{'|| s[i] == '[' ){
                sta.push(s[i]);
            }else {
                if(sta.empty())  return false;

                char top = sta.top();
                if(top == '(' && s[i] ==')' || top == '{' && s[i] =='}' ||top == '[' && s[i] ==']'){
                    sta.pop();
                }else{
                    return false; // invalid 
                }
                
            }
                     
                            
        }
        if(!sta.empty()){

            return false; 
        }

        return true;
 
    }
}; 