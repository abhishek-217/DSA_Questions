class Solution {
public:
    long long minSum(vector<int>& nums1, vector<int>& nums2) {
        // long long res =0;
        long long sum1 =0, sum2 =0;
        bool flag1 = false;
        bool flag2 = false;

        for(int i=0; i<nums1.size(); i++){
            if(nums1[i] == 0){
                nums1[i] = 1;
                flag1 = true;
            }
            sum1 += nums1[i];
        }
        for(int i=0; i<nums2.size(); i++){
            if(nums2[i] == 0){
                nums2[i] = 1;
                flag2 = true;
            }
            sum2 += nums2[i];
        }

        if(sum2 > sum1 && flag1 == true){
            return sum2;
        }else if(sum1 > sum2 && flag2 == true){
            return sum1;
        }else if(sum1 == sum2){
            return sum1;
        }

        return -1;


    }
};