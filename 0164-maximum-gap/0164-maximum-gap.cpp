class Solution {
public:
    int maximumGap(vector<int>& nums) {
        
        int l = nums.size();

        if(l < 2){
            return 0;
        }
        int max = 0;
        sort(nums.begin(), nums.end());

        for(int i =1; i<l; i++){
            if(nums[i] - nums[i-1] > max){
                max = nums[i] - nums[i-1];
            }
        }

        return max;
    }
};