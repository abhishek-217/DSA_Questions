class Solution {
public:
    int minSteps(string s, string t) {
        
        vector<int>sN(26,0);
        vector<int>tN(26,0);

        for(int i=0; i<s.size(); i++){
            sN[s[i] - 'a']++;
            tN[t[i] - 'a']++;

        }

        int step =0;

        for(int i =0; i<26; i++){
            if(tN[i] > sN[i]){
                step += tN[i] - sN[i];
            }
        }

        return step;
    }
};