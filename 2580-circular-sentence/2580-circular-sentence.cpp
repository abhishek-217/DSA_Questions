class Solution {
public:
    bool isCircularSentence(string sentence) {
        int l = sentence.size();

        if(sentence[0] != sentence[l-1]){
            return false;
        }
        for(int i=0; i<l-1; i++){
            if(sentence[i] == ' ' && sentence[i] != sentence[l-1] ){
                if(sentence[i-1] != sentence[i+1]){
                    return false;
                }
            }

        }

        return true;
    }
};