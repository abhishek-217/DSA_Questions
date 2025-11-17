class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int ones = 0;
        bool flag = false;

        for (int i = 0; i < nums.size(); i++) {

            if (nums[i] == 0) {
                ones++;
            }

            if (flag && (nums[i] == 1 && ones < k)) {

                return false;
            }
            if (nums[i] == 1) {
                ones = 0;
                flag = true;
            }
        }

        return true;
    }
};