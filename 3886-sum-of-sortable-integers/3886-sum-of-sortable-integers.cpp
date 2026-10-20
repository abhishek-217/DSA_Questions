class Solution {
public:
    int sortableIntegers(vector<int>& nums) {
        int n = nums.size(), ans = 0;
        for (int k = 1; k <= n; k++) {
            if (n % k != 0) {
                continue;
            }
            int prev_max = INT_MIN;
            bool ok = true;

            for (int start = 0; start < n; start += k) {
                int drops = 0;
                int mn = INT_MAX, mx = INT_MIN;

                for (int i = start; i < start + k; i++) {
                    mn = min(mn, nums[i]);
                    mx = max(mx, nums[i]);

                    int next = (i == start + k - 1) ? nums[start] : nums[i + 1];
                    if (nums[i] > next)
                        drops++;
                }

                if (drops > 1) {
                    ok = false;
                    break;
                }

                if (prev_max > mn) {
                    ok = false;
                    break;
                }

                prev_max = mx;
            }

            if (ok)
                ans += k;
        }
        return ans;
    }
};