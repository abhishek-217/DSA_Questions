class Solution {
public:
    long long countCommas(long long n) {
        if(n <= 999){
            return 0;
        }

        // string s = to_string(n);
        // int count = 0;
        // for(int i=1; i<s.size(); i+=3){
        //     count++;
        // }

        // return count;

        long long countComas = 0;
        long long base = 1000;
        
        while (n >= base) {
            countComas += (n - base + 1);
            base *= 1000;
        }
        
        return countComas;

    }
};