class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        vector<vector<int>>res;

        sort(nums.begin(), nums.end());

        int i=0;
        while(i < nums.size()){
            vector<int>ans;
           
           ans.push_back(nums[i]);
           int s = nums[i];
           i++;

           while(i< nums.size() && nums[i] - s <= k){
                ans.push_back(nums[i]);
                i++;
           }
           
            res.push_back(ans);
        }

        return res.size();
    }
};