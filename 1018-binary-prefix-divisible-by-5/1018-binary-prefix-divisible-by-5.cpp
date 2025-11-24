class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {

        vector<bool> ans;
        int num =0;

        for (int i = 0; i < nums.size(); i++) {

            // if (f) {
            //     bitset<32> binary_representation(num);
            //     f = false;
            //     if (num % 5 == 0) {
            //         ans.push_back(true);
            //     } else {
            //         ans.push_back(false);
            //     }
            //     continue;
            // }
            // num *= 10;
            // num += nums[i];
            //  bitset<32> binary_representation(num);

            num = (num * 2 + nums[i]) % 5;


            if (num % 5 == 0) {
                ans.push_back(true);
            } else {
                ans.push_back(false);
            }

        }

        return ans;
    }
};