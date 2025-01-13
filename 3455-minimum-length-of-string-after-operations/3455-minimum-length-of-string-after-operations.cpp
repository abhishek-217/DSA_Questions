class Solution {
public:
    int minimumLength(string s) {
        vector<int>charFreq(26,0);

        int totalLength =0;

        for(int i=0; i<s.size(); i++){
            charFreq[s[i] - 'a']++;
        }

        for(int i=0; i<charFreq.size(); i++){
            if(charFreq[i]  == 0){
                continue;
            }else if(charFreq[i] % 2 !=0){
                totalLength++;
            }else{
                totalLength+=2;
            }
        }

        return totalLength;
    }
};