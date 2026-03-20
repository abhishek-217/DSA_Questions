class Solution {
public:
    int minSwaps(string s) {
   
        int n = s.size();
        stack<char>st;

        for(int i=0; i<n; i++){
            if(s[i] == '['){
                st.push(s[i]);
            }else{
                if(!st.empty() && st.top() == '[' && s[i] == ']'){ 
                    st.pop();
                }
            }
            
            
        }
        int res = st.size();


        return (res +1)/2;
        
    }
};