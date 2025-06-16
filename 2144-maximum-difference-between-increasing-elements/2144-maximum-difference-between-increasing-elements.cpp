class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int l = nums.size();

        int res = -1;

        for(int i=0; i<l; i++){
            for(int j=i+1; j<l; j++){
                if(nums[i] < nums[j] ){
                    res = max(res, nums[j] - nums[i]);
                }
            }
        }

        return res;
    }
};