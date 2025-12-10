class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int mini = nums[0];
        int maxi = nums[0];
        unordered_map<int,int>mp;
        mp[nums[0]]++;

        vector<int>res;

        for(int i=1; i<nums.size(); i++){
            mini = min(nums[i], mini);
            maxi = max(nums[i], maxi);
            mp[nums[i]++];
        }


        while(mini <= maxi){
            if(mp.find(mini) == mp.end()){
                res.push_back(mini);
            }
            mini++;
        }

        return res;
    }
};