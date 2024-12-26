class Solution {
public:
    string reverseWords(string s) {
        int l = s.size();
        vector<string> res;
        
        int i = 0;
        while (i < l) {
            while (i < l && s[i] == ' ') {
                i++;
            }
            
            int j = i;
            while (i < l && s[i] != ' '){
                i++;
            }
            
            if (j < i) {
                res.push_back(s.substr(j, i - j));
            }
        }
        
        string ans = "";
        for (int i = res.size() - 1; i >= 0; i--) {
            ans += res[i];
            if (i > 0) ans += ' ';
        }
        
        return ans;

    }
};