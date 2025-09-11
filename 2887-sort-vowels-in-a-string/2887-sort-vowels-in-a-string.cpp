class Solution {
public:

    bool Check(char c){
        char f = tolower(c);

        return (f == 'a' || f == 'e' || f == 'i' || f == 'o' || f == 'u');
    }

    string sortVowels(string s) {
        string m ="";

        for(char c:s){
            if(Check(c)){
                m += c;
            }
        }

        sort(m.begin(), m.end());
        int j=0;

        for(int i=0; i<s.size(); i++){
            if(Check(s[i])){
                s[i] = m[j];
                j++;
            }
        }
       
       return s;
    }
};