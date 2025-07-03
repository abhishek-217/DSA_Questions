class Solution {
public:

    char kthCharacter(int k) {

        string word = "a";

        while(word.size() <= k){
            string res = "";

            for(int i=0; i<word.size(); i++){
                char c = word[i];
                c = c+1;

                res+= c;
            }

            word += res;
        }

       

        return word[k-1];

    }
};