class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int l1 = nums1.size();
        int l2 = nums2.size();

        vector<int>res;
        int i=0;
        int j=0;

        while(i<l1 && j<l2){
            if(nums1[i] < nums2[j]){
                res.push_back(nums1[i]);
                i++;
            }
            else{
                res.push_back(nums2[j]);
                j++;
            }
        }

        while(i<l1){
            res.push_back(nums1[i]);
            i++;
        }

        while(j<l2){
            res.push_back(nums2[j]);
            j++;
        }

        int l = l1+l2;
        int mid = l/2;

        if(l %2 != 0){
            return res[mid];
        }else{
            return (res[mid] + res[mid-1])/2.0;
        }

        return {};
    }
};