class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& s) {
        
        vector<vector<string>>res;
        unordered_map<string, vector<string>>mp;

        for(int i=0; i<s.size(); i++){
            string st = s[i];

            sort(st.begin(), st.end());
            mp[st].push_back(s[i]);
        }

        for(auto &[k,v] : mp){
            res.push_back(v);
        }

        return res;
    
    }
};