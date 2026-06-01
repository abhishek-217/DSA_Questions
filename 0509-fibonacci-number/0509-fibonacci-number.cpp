class Solution {
public:

    int checkfib(int n, vector<int>&dp){
        if(n <= 1){
            return n;
        }

        if(dp[n] != -1){
            return dp[n];
        }

        dp[n] = checkfib(n-1, dp) + checkfib(n-2, dp);

        return dp[n];

    }
    int fib(int n) {
        
        // using dp
        vector<int>dp(n+1, -1);
        // for(int i=0; i<n; i++){
        //     dp[i] = -1;
        // }
        return checkfib(n, dp) ;

    }
};
