class Solution {
public:
    string compressedString(string word) {

        string ans ;
        
        int count =1;
        for(int i= 1; i<word.size(); i++){
            if(word[i] == word[i-1]){
                if(count == 9){
                    ans+= to_string(count) + word[i-1];
                    count = 0;
                }
                count++;

            }else{
                ans+= to_string(count) + word[i-1];
                count =1;
            }
        }
        ans += to_string(count) + word[word.size() - 1];
        return ans;
    }
};