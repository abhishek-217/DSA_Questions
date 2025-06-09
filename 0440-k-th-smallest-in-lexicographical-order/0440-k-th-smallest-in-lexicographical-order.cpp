class Solution {
public:

int findKthNumber(int n, int k) {
        long curr = 1;
        k -= 1;

        while (k > 0) {
            long steps = countSteps(n, curr, curr + 1);
            if (steps <= k) {
                k -= steps;
                curr++;
            } else {
                k -= 1;
                curr *= 10;
            }
        }

        return curr;
    }

    long countSteps(long n, long curr, long next) {
        long steps = 0;
        while (curr <= n) {
            steps += min(n + 1, next) - curr;
            curr *= 10;
            next *= 10;
        }
        return steps;
    }

    // void Lexi(int n , vector<int>&res){
    //     int curr =1;

    //     for(int i=0; i<n; i++){
    //         res.push_back(curr);

    //         if(curr*10 <= n){
    //             curr*= 10;
    //         }else{
    //             while(curr % 10 == 9 || curr + 1 > n){
    //                 curr /= 10;
    //             }
    //             curr++;
    //         }
    //     }
    // }

    // int findKthNumber(int n, int k) {
    //     vector<int>res;

    //     Lexi(n, res);


    //     return res[k-1];
    // }
};