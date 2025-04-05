class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int result = 0;
       
        for (int num : nums) {
            result |= num;
        }
        // Multiply by the number of subset XOR totals that will have each bit set
        return result << (nums.size() - 1);
    }
};