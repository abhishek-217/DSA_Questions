class Solution {
public:

    bool isvo(char ch){
        if(ch == 'a'|| ch == 'e'|| ch == 'i'|| ch == 'o'|| ch == 'u'){
            return true;
        }

        return false;
    }
    long long countOfSubstrings(string word, int k) {
        int len = word.size();
        int count =0;

        for(int i =0 ; i<len ; ++i){
            unordered_set<char>vowel;
            int countcons =0;

            for(int j =i; j<len ; ++j){
                char ch = word[j];
                
                if(isvo(ch)){
                    vowel.insert(ch);
                }else{
                    countcons++;
                }

                if(countcons > k){
                    break;
                }
                if(vowel.size()==5 && k == countcons){
                    count++;
                }
                
            }
        }
        return count;
    }
};
