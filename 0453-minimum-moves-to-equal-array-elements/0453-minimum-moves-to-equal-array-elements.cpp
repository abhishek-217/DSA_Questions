class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n = nums.size();

        int moves = 0;
        int mini = nums[0];
        for(int i=1; i<n; i++){
            if(nums[i] < mini){
                mini = nums[i];
            }
        }
        for(int i: nums){
            moves += i - mini;
        }


        return moves;
    }
};