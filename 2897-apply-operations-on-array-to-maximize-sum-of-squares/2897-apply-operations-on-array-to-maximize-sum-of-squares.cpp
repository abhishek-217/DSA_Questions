class Solution {
public:
    int maxSum(vector<int>& nums, int k) {

        vector<int> bts(32, 0);
        int mod = 1e9 + 7;
        for (auto it : nums) {
            int x = it;
            for (int i = 0; i < 32; i++) {
                if (it & (1 << i))
                    bts[i]++;
            }
        }
        long long ans = 0;
        for (int i = 0; i < k; i++) {
            long long x = 0;
            for (int i = 0; i < 32; i++) {
                if (bts[i]) {
                    x += 1 << i;
                    bts[i]--;
                }
            }

            ans += (x * x) % mod;
            ans %= mod;
        }
        return ans;
    }
};