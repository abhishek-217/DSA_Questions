class Solution {
public:
    bool isAnagram(string s, string t) {
        // sort(s.begin(), s.end());
        // sort(t.begin(), t.end());

        // if(s == t){
        //     return true;
        // }


        // return false;

        vector<int>ans(26,0);

        if(s.size() != t.size()){
            return false;
        }

        for(int i=0; i<s.size(); i++){
            ans[s[i] - 'a']++;
            ans[t[i] - 'a']--;

        }

        for(int i =0; i<26; i++){
            if(ans[i] != 0){
                return false;
            }
        }

        return true;
    }
};