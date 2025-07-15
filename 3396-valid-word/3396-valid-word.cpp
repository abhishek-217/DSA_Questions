class Solution {
public:
    bool isValid(string word) {
        if (word.size() < 3) {
            return false;
        }
        bool flag1 = false;
        bool flag2 = false;

        for (auto ch : word) {
            if (isalpha(ch)) {
                ch = tolower(ch);

                    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' ||
                        ch == 'u') {
                        flag1 = true;
                    }else{
                        flag2 = true;
                    }
            }
            else if(!isdigit(ch)){
                return false;
            }


            // if(ch == '@' || ch == '#' || ch == '$'){
            //     return false;
            // }
        }

        return flag1 && flag2;
    }
};