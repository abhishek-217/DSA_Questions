class Solution {
public:
    string defangIPaddr(string ad) {
        string ans = "";

        for(char c: ad){
            if(c != '.'){
                ans += c;
            }else if(c == '.'){
                string p = "[.]";
                ans += p;
            }
        }

        return ans;
    }
};