class Solution {
public:
    int findPairs(vector<int>& nums, int k) {

        int n = nums.size();
        int count = 0;
        unordered_map<int, int> mp;

        for (int i = 0; i < n; i++) {
            mp[nums[i]]++;
        }

        for (auto v : mp) {

            if (k == 0) {
                if (v.second > 1) {
                    count++;
                }
            } else if (mp.find(v.first + k) != mp.end()) {
                count++;
            }
        }

        return count;
    }
};