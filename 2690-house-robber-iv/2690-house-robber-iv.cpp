class Solution {
public:

    int maxi(vector<int>&res){
        int m = res[0];

        for(int i=1; i<res.size(); i++){
            if(m<res[i]){
                m = res[i];
            }
        }

        return m;
    }


    int minCapability(vector<int>& nums, int k) {
        
        int left = 1;
        int right = maxi(nums);


        while(left < right){

            int mid = left + (right-left)/2;

           int count =0;
            for(int i=0; i<nums.size(); i++){
                if(nums[i] <= mid){
                    count++;
                    i++;
                }
            }

            if(count >= k){
                right = mid;
            }else{
                left = mid +1;
            }

        }

        return left;
        
    }
};