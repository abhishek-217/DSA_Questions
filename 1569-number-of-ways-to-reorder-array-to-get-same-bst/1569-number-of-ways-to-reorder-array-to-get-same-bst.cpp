class Solution {
    vector<vector<long long>> nCr;
    long long helper(vector<int> nums, int mod) {
        int n = nums.size();
        if (n <= 2)
            return 1;
        vector<int> l, r;
        for (int i = 1; i < n; i++) {
            if (nums[i] < nums[0])
                l.push_back(nums[i]);
            if (nums[i] > nums[0])
                r.push_back(nums[i]);
        }

        int L = l.size(), R = r.size();
        return nCr[n - 1][L] * helper(l, mod) % mod * helper(r, mod) % mod;
    }

public:
    int numOfWays(vector<int>& nums) {
        int n = nums.size(), mod = 1e9 + 7;
        nCr.resize(n + 1);
        for (int i = 0; i < n + 1; ++i) {
            nCr[i] = vector<long long>(i + 1, 1);
            for (int j = 1; j < i; ++j) {
                nCr[i][j] = (nCr[i - 1][j - 1] + nCr[i - 1][j]) % mod;
            }
        }

        return helper(nums, mod) - 1;
    }
};