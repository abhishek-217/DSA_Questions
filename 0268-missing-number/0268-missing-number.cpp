class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int s =0;
        int e = nums.size()-1;

        while(s<=e){
            int m = s + (e-s)/2;
            if(nums[m] == m){
                s = m+1;
            }else{
                e = m-1;
            }
        }

        return s;
    }
};