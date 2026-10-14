class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        
        // int tempsum= sum, newnum=num;

        if(9*num < sum){
            return "";

        }

        string ans;
        while(num-- >0){
            int digit = min(sum,9);
            ans += char('0' + digit);

            sum -= digit;
        }

        return ans;

    }
};