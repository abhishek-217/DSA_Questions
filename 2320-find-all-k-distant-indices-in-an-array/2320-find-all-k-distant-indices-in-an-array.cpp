class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        vector<int>index;

        vector<int>res;

        for(int i=0; i<nums.size(); i++){
            if(nums[i] == key){
                index.push_back(i);
            }
        }

        for(int i=0; i<nums.size(); i++){
            for(int j=0; j<index.size(); j++){

                if(abs(index[j] -i) <= k){
                    res.push_back(i);
                    break;
                }
            }
        }

        return res;
    }
};