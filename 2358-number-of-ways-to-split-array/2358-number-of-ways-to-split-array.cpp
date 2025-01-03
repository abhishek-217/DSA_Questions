class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int n = nums.size();
        int ans =0;

        long long tsum = 0;
        for(int i=0; i<n; i++){
            tsum += nums[i];
        }
        long long p=0;
        for(long i=0; i<n-1; i++){

            p += nums[i];
            if(p >= tsum - p){
                ans++;
            }
        }

        return ans;
    }
};