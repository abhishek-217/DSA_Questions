class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_map<int,int>mp;

        for(int i=0; i<nums.size(); i++){
            mp[nums[i]]++;
        }

        for(auto &[key,val] : mp){
            if(val % 2 != 0){
                return false;
            }
        }

        return true;
    }
};