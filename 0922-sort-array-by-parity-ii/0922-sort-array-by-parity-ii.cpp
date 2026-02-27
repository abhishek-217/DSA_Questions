class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int oc = 1, ec = 0;
        int n = nums.size();

        while (ec < n && oc < n) {

         
            if (nums[ec] % 2 == 0) {
                ec += 2;
            }
            else if (nums[oc] % 2 == 1) {
                oc += 2;
            }
            else {
                swap(nums[ec], nums[oc]);
                ec += 2;
                oc += 2;
            }
        }

        return nums;
    }
};