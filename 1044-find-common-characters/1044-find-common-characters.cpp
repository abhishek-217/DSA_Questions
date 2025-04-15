class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
         int n = words.size();

        vector<int> hashMap(26,0);

        for(auto &c: words[0]){

            hashMap[c-'a']++;
            
        }

        for(int i=1;i<n;i++){

            vector<int> hashMap2(26,0);

            for(auto &c: words[i]){

                hashMap2[c-'a']++;
                
            }

            for(int j=0;j<26;j++){

                hashMap[j] = min(hashMap[j],hashMap2[j]);
                
            }
            
        }

        vector<string> res;

        for(int i=0;i<26;i++){

            while(hashMap[i]--){

                res.push_back(string(1,i+'a'));
                
            }
            
        }
        return res;
    }
};