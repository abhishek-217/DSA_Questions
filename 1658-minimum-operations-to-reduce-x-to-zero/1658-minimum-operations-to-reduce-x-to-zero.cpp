class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        
        int total =0;
        for(int i : nums){
            total += i;
        }
        int target = total - x;
        int currSum = 0;
        int index = -1;
        int left =0;

        for(int i=0; i<nums.size(); i++){
           currSum += nums[i];

           while(currSum > target  && left <= i){
                currSum -= nums[left];
                left++;
           }

           if(currSum == target){
                index = max(index, i-left+1);
           }
        }

        if(index == -1){
            return -1;
        }

        return nums.size() - index;
    }
};