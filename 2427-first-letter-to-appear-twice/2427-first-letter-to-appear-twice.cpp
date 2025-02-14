class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_map<char,int>mp;
        char b = 'b';

        for(char a:s){
            mp[a]++;
            if(mp[a] == 2){
                return a;
            }
        }

        return b;
    }
};