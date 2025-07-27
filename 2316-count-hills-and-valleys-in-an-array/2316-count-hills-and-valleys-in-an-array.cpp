class Solution {
public:
    int countHillValley(vector<int>& nums) {
        
        int n = nums.size();

        int count =0;
        for(int i=1; i<n-1; i++){
            if(nums[i] == nums[i-1]){
                continue;
            }
            
            int l = i-1;
            int m = i+1;
            while((m < n) && (nums[l] == nums[i] || nums[m] == nums[i])){
                if(nums[l] == nums[i]){
                    l--;
                }else{
                    m++;
                }
            }

            if(m == n){
                break;
            }

            if(nums[l] > nums[i] && nums[m] > nums[i]){
                count++;
            }
            else if(nums[l] < nums[i] && nums[m] < nums[i]){
                count++;
            }

            
        }

        return count;
    }
};