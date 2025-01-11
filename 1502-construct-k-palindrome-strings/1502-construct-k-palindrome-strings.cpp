class Solution {
public:
    bool canConstruct(string s, int k) {
        int l = s.size();
        if(k > l){
            return false;
        }
        vector<int>mp(26,0);
        for(int i=0; i<l; i++){
            mp[s[i]-'a']++;
        }
        int count =0;
        for(int i=0; i<mp.size(); i++){
            if(mp[i] % 2 != 0){
               count++;
            }
        }

        return count <= k;
    }
};