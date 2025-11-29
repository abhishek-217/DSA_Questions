class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
       int  tsum =0;

       for(int i=0; i<nums.size(); i++){
            tsum += nums[i];
       }

    //    if(tsum % k == 0){
    //     return 0;
    //    }

    //    int rem = tsum % k;

    //    for(auto i : nums){
    //     if(i >= rem){
    //         return rem;
    //     }
    //    }

    //    if(tsum < k){
    //     return tsum;
    //    }

       return tsum % k ;
    }
};