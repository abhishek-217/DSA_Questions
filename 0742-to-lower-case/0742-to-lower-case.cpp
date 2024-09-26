class Solution {
public:
    string toLowerCase(string s) {
        string re = "";
        for(int i = 0; i<s.size(); i++){
            if(s[i] >= 65 && s[i] <= 90 ){
                s[i] = s[i] + 32;
                re.push_back(s[i]);
                
            }else{
                re.push_back(s[i]);
            }
            
        }

       return re;
    }
};  