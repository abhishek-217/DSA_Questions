class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<int>res;
        int len = nums.size();

        for(int i =0 ; i<len; i++){
            if(nums[i] == target){
                res.push_back(i);
            }
        }
        if(res.size()==0){
            return {};
        }
        return res;
    }
};