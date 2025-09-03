class Solution {
public:
    bool canConstruct(string ran, string mag) {
        unordered_map<char,int>mp;

        for(char c:mag){
            mp[c]++;
        }

        for(char c: ran){
            if(mp.find(c) == mp.end()){
                return false;
            }else{
                if(mp[c] == 0){
                    return false;
                }
                mp[c]--;
            }
        }

        return true;

    }
};