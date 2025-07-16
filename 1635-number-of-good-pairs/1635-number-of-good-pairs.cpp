class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        
        unordered_map<int,int>freq;

        for(auto i : nums){
            freq[i]++;
        }

        int count =0;

        for(auto &[k,v] : freq){
            int val = (v*(v-1) / 2);
            count +=val;
        }

        return count;
    }
};