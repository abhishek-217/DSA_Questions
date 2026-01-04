class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        // int ans = 0;

        // for (int i = 0; i < nums.size(); i++) {
        //     if ((int)sqrt(nums[i]) == 4) {
        //         int j=1;
        //         while (j <= nums[i]) {
        //             if (nums[i] % j == 0) {
        //                 ans += j;
        //             }

        //             j++;
        //         }
        //     }
        // }

        // return ans;

        int ans = 0;

        for (int num : nums) {
            int lastDivisor = 0; 
            int count = 0;
            int sum = 0;

            for (int d = 1; d * d <= num; d++) {
                if (num % d == 0) {
                    count += (d * d == num) ? 1 : 2;
                    sum += (d * d == num) ? d : (d + num / d);

                    if (count > 4)
                        break;
                    if (count == 4)
                        lastDivisor = d;
                }
            }

            if (count == 4) {
                ans += sum;
            }
        }

        return ans;
    }
};