class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        
        unordered_map<int,int>freq;
        vector<int>res;
        
        for(auto num:nums){
            freq[num]++;
        }

        for(auto [key,val] : freq){
            if(val > n/3){
                res.push_back(key);
            }
        }
      
        return res;
    }
};