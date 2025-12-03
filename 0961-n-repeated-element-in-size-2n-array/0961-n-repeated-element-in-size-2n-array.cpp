class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int,int>mp;

        for(int i: nums){
            mp[i]++;
        }
        for(auto &[k,v]: mp){
            if(v > 1){
                return k;
            }
        }

        return 0;
    }
};