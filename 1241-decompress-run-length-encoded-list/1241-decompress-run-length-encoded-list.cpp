class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int>res;

        for(int i=0; i<nums.size(); i=i+2){
            while(nums[i] != 0){
                res.push_back(nums[i+1]);
                nums[i]--;
            }
        }

        return res;
    }
};