class Solution {
public:
    bool solve(vector<int>& nums, int k, int &mid){
       int count=1;
       int sum=0;
       for(int i=0;i<nums.size();i++){
           sum+=nums[i];
           if(sum>mid){
               count++;
               sum=nums[i];
           }
       }
        if(count>k)  return false;
        
        return true;
    }

    int splitArray(vector<int>& nums, int k) {
        int ans=-1;
        int s=*max_element(nums.begin(),nums.end()),e=accumulate(nums.begin(),nums.end(),0);
        while(s<=e){
            int mid=s+(e-s)/2;
            if(solve(nums,k,mid)){
                ans=mid;
                e=mid-1;
            }
            else s=mid+1;
        }
        return ans;
    }
};