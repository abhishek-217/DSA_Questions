class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // int mul =1;

        // for(int i: nums){
        //     mul *= i;
        // }

        // vector<int>ans;

        // for(int i=0; i<nums.size(); i++){
        //     if(nums[i] == 0){
        //         ans.push_back(mul);
        //         continue;
        //     }
          

        //     if(r <=0){
        //         ans.push_back(0);
        //     }else{
        //         ans.push_back(r);

        //     }
        // }

        // return ans;

        int n = nums.size();

        vector<int>prefix(n,1);
        vector<int>suffix(n,1);

        for(int i=1; i<n; i++){
            prefix[i] = prefix[i-1]*nums[i-1];
        }

        for(int i= n-2; i>=0; i--){
            suffix[i] = suffix[i+1]*nums[i+1];
        }

        for(int i=0; i<n; i++){
            nums[i] = prefix[i]*suffix[i];
        }

        return nums;
    }
};