class Solution {
public:
    string makeFancyString(string s) {
        int l = s.size();
        string s2 ;
        
        int count = 1;
        s2 += s[0];
        for(int i=1; i<l; i++){

            if(s[i] == s[i-1]){
                count++;
            }else{
                count =1;
            }

            if(count < 3){
                s2 += s[i];
            }
        }

        return s2;
    }
};