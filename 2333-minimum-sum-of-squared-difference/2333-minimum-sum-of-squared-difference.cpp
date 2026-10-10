class Solution {
public:
    long long minSumSquareDiff(vector<int>& nums1, vector<int>& nums2, int k1,
                               int k2) {

        // long long  k = k1 + k2;

        // vector<long long> diff;
        // long long ans = 0;
        // long dif = 0;

        // for (int i = 0; i < nums1.size(); i++) {

        //     long long d = abs(nums1[i] - nums2[i]);
        //     diff.push_back(d);
        //     ans += d * d;

        //     dif += d;
        // }

        // if (dif <= k) {
        //     return 0;
        // }

        // if (k == 0) {
        //     return ans;
        // }

        // sort(diff.begin(), diff.end());

        // int s = diff.size() - 1;

        // while (k > 0 && s >= 0) {
        //     if(diff[s] >0){
        //         diff[s]--;
        //         s--;
        //     }

        // }

        // long long res = 0;
        // for (long long p : diff) {

        //     res += p * p;
        // }

        // return res;

        // priority queue with TLE

        // long long k = (long long)k1 + k2;

        // priority_queue<long long> pq;
        // long long sum = 0;

        // for (int i = 0; i < nums1.size(); i++) {
        //     long long d = abs(nums1[i] - nums2[i]);
        //     pq.push(d);
        //     sum += d;
        // }

        // if (sum <= k)
        //     return 0;

        // while (k--) {
        //     long long d = pq.top();
        //     pq.pop();

        //     if (d > 0) {
        //         d--;
        //         pq.push(d);
        //     }
        // }

        // long long ans = 0;

        // while (!pq.empty()) {
        //     long long d = pq.top();
        //     pq.pop();
        //     ans += d * d;
        // }

        // return ans;

        long long k = (long long)k1 + k2;

        vector<long long> freq(100001, 0);
        long long sum = 0;
        int mx = 0;

        for (int i = 0; i < nums1.size(); i++) {
            int d = abs(nums1[i] - nums2[i]);
            freq[d]++;
            sum += d;
            mx = max(mx, d);
        }

        if (sum <= k)
            return 0;

        for (int d = mx; d > 0 && k > 0; d--) {
            long long take = min(k, freq[d]);

            freq[d] -= take;
            freq[d - 1] += take;
            k -= take;
        }

        long long ans = 0;

        for (int d = 1; d <= mx; d++) {
            ans += freq[d] * d * d;
        }

        return ans;
    }
};