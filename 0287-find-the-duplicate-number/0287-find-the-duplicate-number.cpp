class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        vector<bool>re(n+1,false);
       
        for(int i =0; i<nums.size(); i++){
            if(re[nums[i]]){
                return nums[i];
            }
            
            re[nums[i]]= true;

        }
        return -1;
    }
};