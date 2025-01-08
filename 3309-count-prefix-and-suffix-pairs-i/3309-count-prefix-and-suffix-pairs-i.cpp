class Solution {
public:

    bool isPS(string s1, string s2){
        int n = s1.size();
        int m = s2.size();
    
        
        if(s2.substr(0, n) == s1 && s2.substr(m - n) == s1){
            return true;
        }
    
        return false;
    }

    int res =0;
    int countPrefixSuffixPairs(vector<string>& words) {
        for(int i=0; i<words.size(); i++){
            for(int j=i+1; j<words.size(); j++){
                if(isPS(words[i], words[j])){
                    res++;
                }
            }
        }

        return res;
    }
};