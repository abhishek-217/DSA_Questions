class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        
        int n = nums.size();
        vector<int>res(n,0);

        for(int i=0; i<n; i++){
            // if(nums[i] == 0){
            //     res[i] = nums[i];
            // }else if(nums[i] > 0){

            //     if(nums[i] > n-i){
            //         int ind =  nums[i] - (n-i);
            //         res[i] = nums[ind];
            //     }else{
            //         int d = nums[i]-1;
            //         res[i] = nums[i+d];
            //     }
            // }else{
            //     int nid = abs(nums[i]);
            //     if(nid <= i){
            //         res[i] = nums[i- nid];
            //     }else{
            //         int rem = nid - i;
            //         res[i] = nums[n-rem];
            //     }
            // }

            int newind = (i + nums[i]) % n;

            if(newind < 0){
                newind += n;
            } 

            res[i] = nums[newind];
            
        }

        return res;
    }
};