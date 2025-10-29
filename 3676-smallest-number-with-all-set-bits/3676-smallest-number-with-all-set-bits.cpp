class Solution {
public:
    int GEqual(string n, int s) {
        string num = n;
        int dec_value = 0;

        // Initializing base value to 1, i.e 2^0
        int base = 1;

        int len = num.length();
        for (int i = len - 1; i >= 0; i--) {
            if (num[i] == '1')
                dec_value += base;
            base = base * 2;
        }

        if(dec_value >= s){
            return dec_value;
        }

        return 0;
    }
    int smallestNumber(int n) {
        string s = "1";

        for (int i = 0; i < 10; i++) {
            int p = GEqual(s,n);

            if(p != 0){
                return p;
            }
            s += '1';
        }

        return 0;
    }
};