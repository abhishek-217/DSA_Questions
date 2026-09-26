class Solution {
public:
    string evaluate(string s, vector<vector<string>>& kn) {
        
        int n = kn.size();
        unordered_map<string, string>mp;

        for(int i=0; i<n; i++){
            mp[kn[i][0]] = kn[i][1];
        }

        string ans = "";

        for(int i=0; i<s.size(); i++){
            if(s[i] == '('){
                i++;
                string temp ="";
                while(s[i] != ')'){
                    temp += s[i];
                    i++;
                }

                if(mp.find(temp) == mp.end()){
                    ans += "?";
                }else{
                    ans += mp[temp];
                }
            }else{
                ans += s[i];
            }
        }

        return ans;

    }
};