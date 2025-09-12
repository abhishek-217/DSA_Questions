class Solution {
public:
    bool doesAliceWin(string s) {
        unordered_set<char>s1 = {'a', 'e', 'i','o','u'};

        for(char c : s){
            if(s1.count(c)){
                return true;
            }
        }

        return false;
    }
};