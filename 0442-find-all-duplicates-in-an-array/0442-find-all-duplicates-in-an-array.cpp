class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>res;
        unordered_map<int,int>mp;

        for(auto num : nums){
            mp[num]++;
        }
        for(auto [key,val] : mp){
            if(val >1){
                res.push_back(key);
            }
        }

        return res;
        
    }
};