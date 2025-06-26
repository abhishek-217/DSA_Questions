class Solution {
public:
    int titleToNumber(string c) {
        int res =0;

        for(char i:c){

            int r = i - 'A' +1;
            res = res*26 + r;
        }

        return res;
    }
};