class Solution {
public:
    int canBeTypedWords(string text, string bL) {
        
        // int l = text.size();
        // unordered_map<char,int>mp;

        // for(char c: bL){
        //     if(c != ' '){
        //         mp[c]++;
        //     }
        // }

        // int i=0;
        // int ans =0;

        // while(i<l){
    
        //     if(mp.find(text[i]) != mp.end()){
        //         while(i<l && text[i] != ' '){
        //             i++;
        //         }
        //         i++;
        //     }

        //     if(i < l && text[i] == ' '){
        //         ans++;
        //     }
        //     i++;
        // }

        // bool last = false;
        // for(int i=l-1; i>=0; i--){
        //     if(text[i] == ' '){
        //         break;
        //     }
        //     if(mp.find(text[i]) != mp.end()){
        //         last = true;
        //     }
        // }

        // if(!last){
        //     ans++;
        // }

        // return ans;



        unordered_set<char> brokenKeys;
        int count = 0;

        for (auto& c : bL){
            brokenKeys.insert(c);
        }

        stringstream ss(text);
        string word;
        vector<string> words;

        while (ss >> word){
            words.push_back(word);
        }

        for (auto w : words)
        {
            for (char c : w)
            {
                if (brokenKeys.find(c) != brokenKeys.end())
                {
                    count++;
                    break;
                }
            }
        }

        return words.size() - count;
    }
};