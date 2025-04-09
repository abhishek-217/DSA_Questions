class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        unordered_set<int>ans;

        for(int p : nums){
            if(p<k){
                return -1;
            }else if(p>k){
                ans.insert(p);
            }
        }

        return ans.size();
    }
};