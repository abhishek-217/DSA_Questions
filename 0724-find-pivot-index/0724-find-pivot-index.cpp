class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();

        int tsum =0;
        for(int i:nums){
            tsum += i;
        }
        int lsum =0;

        for(int i=0; i<n; i++){
            tsum -= nums[i];

            if(lsum == tsum){
                return i;
            }
            lsum += nums[i];
            
        }

        return -1;

    }
};