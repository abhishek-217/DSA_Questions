class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
         int maxVal = *max_element(nums.begin(), nums.end());

        long long result = 0;
        int left = 0, countMax = 0;

        // Step 2: Start sliding window
        for (int right = 0; right < nums.size(); ++right) 
        {
            // Step 3: Track count of maxVal in window
            if (nums[right] == maxVal) 
            {
                countMax++;
            }

            // Step 4: Shrink window until countMax < k
            while (countMax >= k) 
            {
                if (nums[left] == maxVal) 
                {
                    countMax--;
                }
                left++;
            }

            // Step 5: Add valid subarrays ending at 'right'
            result += left;
        }

        return result;
    }
};