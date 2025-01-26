class Solution {
public:

    vector<int> findLonely(vector<int>& nums) {
        int l = nums.size();
        vector<int>ans;

        unordered_map<int,int>mp;
        for(auto num: nums){
            mp[num]++;
        }

        for(auto [key,val] : mp){
            if(val == 1){
                if(mp.find(key-1) == mp.end() && mp.find(key+1) == mp.end()){
                    ans.push_back(key);
                }
            }
        }
        return ans;
    }
};