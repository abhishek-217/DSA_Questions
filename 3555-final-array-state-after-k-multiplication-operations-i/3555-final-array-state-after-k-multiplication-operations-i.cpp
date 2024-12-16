class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int mul) {
        
        int l = nums.size();
        while(k != 0){
            int min = nums[0];
            int in = 0;
            for(int i=1; i<l; i++){
                if(min > nums[i]){
                    min = nums[i];
                    in = i;
                }
            }

            nums[in] = nums[in]*mul;
            k--;

        }

        return nums;
    }
};