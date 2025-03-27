class Solution {
public:
    int minimumIndex(vector<int>& nums) {
        map<int,int>mp;

        for(int num : nums){
            mp[num]++;
        }

        int freq =0;
        int x =0;
        for(auto [key, val] : mp){
            if(freq < val){
                freq = val;
                x = key;
            }
        }
        int leftFreq = 0, rightFreq = freq;
        int n = nums.size();

        for (int i = 0; i < n; ++i) {
            if (nums[i] == x) {
                leftFreq++;
                rightFreq--;
            }

            // Check dominance conditions
            if (leftFreq * 2 > (i + 1) && rightFreq * 2 > (n - i - 1)) {
                return i;
            }
        }

        return -1;

        
    }
};