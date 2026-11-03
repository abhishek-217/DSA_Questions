class Solution {
public:
    int minMoves(vector<int>& nums) {
        int maxi =0;

        for(int i: nums){
            maxi = max(i, maxi);
        }

        int move =0;

        for(int i: nums){
            if(i != maxi){
                move += (maxi-i);
            }
        }

        return move;
    }
};