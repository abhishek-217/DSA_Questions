class Solution {
public:
    int minLength(string s) {
        // if(s.size() == 1)
        stack<char>s1;
        // stack<char>s2;
        for(int i=0; i<=s.size()-1; i++){

            if(s1.empty()){ // check stack is empty or not

                s1.push(s[i]);
            }else{
                if(s1.top() == 'A' && s[i] == 'B' || s1.top() == 'C' && s[i] == 'D'){
                    s1.pop(); //if substring match pop or push
                }else{
                    s1.push(s[i]);
                }
            }
        }
        // int count =0; // initialize a variable count
     
        // while(!s1.empty()){
        //     count++; //count increase +1 till stack not empty
        //     s1.pop();
        // }
        

        return s1.size(); // return number of char in stack;
        
    }
};