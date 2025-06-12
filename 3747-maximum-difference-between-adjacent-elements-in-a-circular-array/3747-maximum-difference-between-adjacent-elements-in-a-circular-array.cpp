class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {

        int n = nums.size();
        int maxd = abs(nums[0] - nums[n-1]);

        for(int i=0; i<n-1; i++){
            if(maxd < abs(nums[i] - nums[i+1])){
                maxd = abs(nums[i] - nums[i+1]);
            }
        }

        return maxd;
    }
};