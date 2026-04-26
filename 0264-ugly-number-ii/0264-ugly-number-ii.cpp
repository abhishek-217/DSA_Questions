class Solution {
public:
    int nthUglyNumber(int n) {
        // if(n == 1){
        //     return 1;
        // }
        // int in = INT_MAX;

        // int i = 2;
        // int count =1;
        // while(i <= in){
        //     if(i % 2 == 0 || i % 3 == 0 ||i % 5== 0 ){
        //         count++;
        //     }
        //     i++;
        //     if(count == n){
        //         return i;
        //     }
        // }
        // return 1;

        vector<int> ugly(n);
        ugly[0] = 1;

        int i2 = 0, i3 = 0, i5 = 0;

        for (int i = 1; i < n; i++) {
            int next2 = ugly[i2] * 2;
            int next3 = ugly[i3] * 3;
            int next5 = ugly[i5] * 5;

            int next = min({next2, next3, next5});
            ugly[i] = next;

            if (next == next2)
                i2++;
            if (next == next3)
                i3++;
            if (next == next5)
                i5++;
        }

        return ugly[n - 1];
    }
};