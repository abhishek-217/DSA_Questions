class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        int n = nums.size();

        unordered_map<int,int>mp;
        int count =0;
        for(auto num : nums){
            mp[num]++;
            count = max(mp[num], count);
        }
        vector<vector<int>>ans(count);

        for(auto [k,v]: mp){
            
            for(int i=0; i<v; i++){
                ans[i].push_back(k);
            }
        }

        return ans;
    }
};