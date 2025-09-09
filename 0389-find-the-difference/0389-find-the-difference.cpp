class Solution {
public:
    char findTheDifference(string s, string t) {

        unordered_map<char,int>mp;

        for(char c: s){
           mp[c]++;
        }
        unordered_map<char,int>mp1;

        for(char c: t){
           mp1[c]++;
        }

        for(char c : t){
            if(mp.find(c) == mp.end()){
                return c;
            }
            if(mp.find(c) != mp.end() && mp[c] != mp1[c]){
                return c;
            }
        }

        return 'c';
    }
};