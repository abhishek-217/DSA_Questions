class Solution {
public:
    int thirdMax(vector<int>& nums) {
        
        int n = nums.size();

        sort(nums.begin(), nums.end());
        if(n < 3){
            return nums[n-1];

        }

        long max = (long)INT_MAX + 1;
        int t =0;
       for(int i= n-1; i>=0 && t < 3; i--){
            if(nums[i] < max){
                max = nums[i];
                t++;
            }
       }

       if(t != 3){
            return nums[n-1];

       }

       return max;
        
    }
};