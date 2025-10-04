class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {

        vector<string> morse = {".-",   "-...", "-.-.", "-..",  ".",    "..-.",
                                "--.",  "....", "..",   ".---", "-.-",  ".-..",
                                "--",   "-.",   "---",  ".--.", "--.-", ".-.",
                                "...",  "-",    "..-",  "...-", ".--",  "-..-",
                                "-.--", "--.."};


        unordered_set<string>ans;
        for(string word: words){
            string curr = "";
            for(char c : word){
                curr += morse[c-'a'];
            }

            ans.insert(curr);
        }

        return ans.size();
    }
};