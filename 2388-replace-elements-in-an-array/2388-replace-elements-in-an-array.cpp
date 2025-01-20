class Solution {
public:
    vector<int> arrayChange(vector<int>& nums, vector<vector<int>>& op) {
        
        int n = nums.size();
        unordered_map<int,int>mp;

        for(int i=0; i<n; i++){
            mp[nums[i]] = i;
        }

        for(auto ope :op){
            nums[mp[ope[0]]] = ope[1];
            mp[ope[1]] = mp[ope[0]];
        }

        return nums;
    }
};