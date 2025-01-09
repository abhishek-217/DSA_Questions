class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        
        int len = words.size();
        int le = pref.size();
        long  count = 0;

        for(int i = 0; i<len; i++){
            if(words[i].substr(0,le) == pref)
  
            count++; 
        }

        return count;
    }
};