class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        
        int n = nums.size();
    

    int minI = 0, maxI = 0;

    for (int i = 0; i < n; i++) {
        if (nums[i] < nums[minI])
            minI = i;

        if (nums[i] > nums[maxI])
            maxI = i;
    }

    int left = max(minI, maxI) + 1;

    int right = n - min(minI, maxI);

    int both = min(minI, maxI) + 1 + n - max(minI, maxI);

    return min({left, right, both});

    //     int maxV=0 , minV=INT_MAX, maxI=0, minI=0;

    //     for(int i=0; i<n; i++){
    //         if(maxV < nums[i]){
    //             maxV = nums[i];
    //             maxI = i;
    //         }

    //         if(minV > nums[i]){
    //             minV = nums[i];
    //             minI = i;
    //         }
    //     }

    //   int ans = max(maxI, minI)+1;
    //     int minimum = min(maxI,minI)+1;

    //     if((minimum + (n-ans)) < ans){
    //        ans = minimum + (n-ans);
    //     }



    //     return ans;

    }
};