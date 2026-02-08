class Solution {
public:
    int minSubArrayLen(int t, vector<int>& nums) {
        int n = nums.size();


        int l=0, r=0, currSum =0, res = INT_MAX;

        for(r=0; r<n; r++){
            currSum += nums[r];

            while(currSum >= t){
                res = min(res, r-l+1);
                currSum -= nums[l];
                l++;
            }
        }

        if(res == INT_MAX){
            return 0;
        }

        return res;

    }
};
