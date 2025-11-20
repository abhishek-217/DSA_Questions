class Solution {
public:
    string getHint(string secret, string guess) {
        //code
        unordered_map<char,int>mp;

        int bulls =0, cows =0;

        for(char c: secret){
            mp[c]++;
        }

        for(int i=0; i<secret.length(); i++){
            if(secret[i] == guess[i]){
                bulls++;
                mp[secret[i]]--;
            }
        }

        for(int i=0; i<guess.length(); i++){
            if( mp[guess[i]] > 0 &&  secret[i] != guess[i]){
                cows++;
                mp[guess[i]]--;
            }
        }

        string hint = to_string(bulls) + "A" + to_string(cows) + "B";
        
        return hint;
    }
};