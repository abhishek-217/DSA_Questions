class Solution {
public:
    int minDeletion(vector<int>& nums) {
        
        // int n = nums.size();
        int count =0;

        for(int i=0; i<nums.size()-1; i++){
            if(i % 2 ==0 && nums[i] == nums[i+1]){
                nums.erase(nums.begin() + i);
                count++;
                i--;
            }
        }


        if(nums.size() % 2 != 0){
            count++;
        }

        return count;
    }
};