class Solution {
public:
    string reversePrefix(string word, char ch) {
        stack<char>st;
        string re ="";
        int count = 0;
        int len = word.size();
        bool wor = false;
        for(int i =0; i<len; i++){
            if(word[i] != ch){
                st.push(word[i]);
                count++;
            }else{
                wor = true;
                st.push(ch);
                count++;
                break;
            } 
        }
      
        if(wor == false){
            return word;
        }else{
            while(!st.empty()){
                re.push_back(st.top());
                st.pop();
            }
        }
        
        string ne = word.substr(count);

        

        return re + ne;
    }
}; 