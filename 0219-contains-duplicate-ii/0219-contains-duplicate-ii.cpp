class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        // int l = nums.size();
        // int s =0;
        // int e =l-1;

        // while(s<e){
        //     if(nums[s] == nums[e] && abs(s-e) <= k){
        //         return true;
        //     }
        //     s++;
        //     e--;
        // }

        // return false;

        int n = nums.size();
        unordered_map<int, int>mp;
        for(int i=0; i<n; i++){
            if(mp.find(nums[i]) != mp.end() && i - mp[nums[i]] <= k){
                return true;
            }

            mp[nums[i]] = i;
        }
        return false;
    }
};