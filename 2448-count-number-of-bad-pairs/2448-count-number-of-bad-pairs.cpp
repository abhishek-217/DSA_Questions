class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        int n = nums.size();
        long long total_pairs = (long long)n*(n-1)/2;
        long long good_pairs = 0;
        unordered_map<int, long long> mp;
        for(int i = 0; i < n; i++){
            int temp = i - nums[i];
            // Finding all the elements that is same as temp in the map
            if(mp.find(temp) != mp.end()){
                good_pairs += mp[temp];
            }
            mp[temp]++;
        }
        
        // returning the bad pairs as the difference of total pairs and good pairs
        return total_pairs - good_pairs;
    }
};