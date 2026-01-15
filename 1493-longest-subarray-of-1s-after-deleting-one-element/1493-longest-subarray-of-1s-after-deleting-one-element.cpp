class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();

        int count0 =0, lw =0, start =0;

        for(int i=0; i<n; i++){
            if(nums[i] == 0){
               count0++;
            }

           while (count0 > 1) {
                count0 -= (nums[start] == 0);
                start++;
            }

            lw = max(lw, i-start);
        }

        return lw;


    }
};