class Solution {
public:
    int findPermutationDifference(string s, string t) {
        
        unordered_map<char,int>Sfreq;
        unordered_map<char,int>Tfreq;

        for(int i=0; i<s.size(); i++){
            Sfreq[s[i]] = i;
        }
        for(int i=0; i<s.size(); i++){
            Tfreq[t[i]] = i;
        }

        int ans = 0;

        for(char c: s){
            ans += abs(Sfreq[c] - Tfreq[c]);
        }

        return ans;

    }
};