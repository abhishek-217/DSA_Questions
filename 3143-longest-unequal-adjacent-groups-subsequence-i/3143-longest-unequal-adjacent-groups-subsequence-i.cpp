class Solution {
public:
    vector<string> getLongestSubsequence(vector<string>& words, vector<int>& groups) {
        
        // vector<string>res;
        // int l = g.size();

        // if(l ==1){
        //     res.push_back(words[0]);
        // }

        // if(g[0] != g[l-1]){
        //     res.push_back(words[0]);
        // }

        // for(int i=1; i<g.size(); i++){
        //     if(g[i] != g[i-1]){
        //         res.push_back(words[i]);
        //     }
        // }

        // return res;

        vector<string> res;
        int n = words.size();

        if (n == 0) return res;

     
        res.push_back(words[0]);
        int lastGroup = groups[0];

        for (int i = 1; i < n; ++i) {
            if (groups[i] != lastGroup) {
                res.push_back(words[i]);
                lastGroup = groups[i]; // update lastGroup to current
            }
        }

        return res;
    }
};

