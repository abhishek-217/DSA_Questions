class Solution {
public:
    int solve(vector<int>&arr, int i, int j){

        // base case
        if(i == j){
            return arr[i];
        }

        int left = arr[i] - solve(arr,i+1,j);  //player 1 take one and make arr short with i+1;
        int right = arr[j] - solve(arr, i, j-1); //player 2 play and shor arr j-1


        return max(left, right);

    }
    bool predictTheWinner(vector<int>& nums) {
        
       
        int i=0;
        int j = nums.size()-1;

        int diff = solve(nums, i,j);

        if(diff >= 0){
            return true;
        }

        return false;
    }
};