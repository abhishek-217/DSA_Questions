class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {

        unordered_map<int, int> mp;
        int n = nums.size();
        if (n < k || k == 0)
            return 0;

        long long ans = 0;
        // long tsum =0;

        long long fsum = 0;

        for (int i = 0; i < k; i++) {
            fsum += nums[i];
            mp[nums[i]]++;
        }

        if (mp.size() == k) {
            ans = fsum;
        }

        for (int i = k; i < n; i++) {
            mp[nums[i]]++;
            mp[nums[i - k]]--;

            if (mp[nums[i - k]] == 0) {
                mp.erase(nums[i - k]);
            }

            fsum = fsum - nums[i - k] + nums[i];

            if (mp.size() == k) {
                ans = max(ans, fsum);
            }
        }

        return ans;

    
    }
};