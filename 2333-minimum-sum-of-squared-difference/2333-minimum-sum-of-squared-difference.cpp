class Solution {
public:
    long long minSumSquareDiff(vector<int>& nums1, vector<int>& nums2, int k1,
                               int k2) {

        int k = k1 + k2;

        vector<long long> diff;
        long long ans = 0;
        long dif = 0;

        for (int i = 0; i < nums1.size(); i++) {

            long long d = abs(nums1[i] - nums2[i]);
            diff.push_back(d);
            ans += d * d;

            dif += d;
        }

        if (dif <= k) {
            return 0;
        }

        if (k == 0) {
            return ans;
        }

        sort(diff.begin(), diff.end());

        int s = diff.size() - 1;

        // while (k > 0 && s >= 0) {
        //     // diff[s] = diff[s] - 1;

        //     // s--;

        //     if (diff[s] > 0) {
        //         diff[s]--;
        //         k--;
        //     }

        //     if (s > 0 && diff[s] < diff[s - 1]) {
        //         s--;
        //     }

        //     if (s == 0 && diff[s] == 0) {
        //         break;
        //     }
        // }
        while (k > 0 && s > 0) {
            long long gap = diff[s] - diff[s - 1];
            long long need = gap * (s == (int)diff.size() - 1 ? 1 : 1);

            if (gap == 0) {
                s--;
                continue;
            }

            long long count = (int)diff.size() - s;

            if (k >= gap * count) {
                for (int i = s; i < diff.size(); i++) {
                    diff[i] -= gap;
                }
                k -= gap * count;
                s--;
            } else {
                long long reduce = k / count;
                long long rem = k % count;

                for (int i = s; i < diff.size(); i++) {
                    diff[i] -= reduce;
                }

                for (int i = (int)diff.size() - 1; i >= s && rem > 0;
                     i--, rem--) {
                    diff[i]--;
                }

                k = 0;
            }
        }

        if (k > 0) {
            long long reduce = k / diff.size();
            long long rem = k % diff.size();

            for (int i = 0; i < diff.size(); i++) {
                diff[i] = max(0LL, diff[i] - reduce);
            }

            for (int i = (int)diff.size() - 1; i >= 0 && rem > 0; i--, rem--) {
                if (diff[i] > 0)
                    diff[i]--;
            }
        }

        long long res = 0;
        for (long long p : diff) {

            res += p * p;
        }

        return res;
    }
};