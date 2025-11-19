class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        int n = nums.size();

        unordered_map<int,int>mp;
        for(auto i: nums){
            mp[i]++;
        }

        while(true){
            if(mp.find(original) != mp.end()){
                original *= 2;
            }else{
                return original;
            }
        }


        return 0;
    }
};