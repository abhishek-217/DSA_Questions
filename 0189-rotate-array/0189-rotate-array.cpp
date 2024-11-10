class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        int l = nums.size();

        if(l == 0 || k%l==0){
            return;
        }
        k = k%l;
        vector<int>res;

        for(int i = l-k; i<l; i++){
            res.push_back(nums[i]);
        }
        for(int i = 0; i<l-k; i++){
            res.push_back(nums[i]);
        }

        nums = res;
    }
};