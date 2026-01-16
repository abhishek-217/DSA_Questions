class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n = nums.size();

        int count =0, ans =0;
        unordered_map<int,int>mp;
        mp[0] =1;

        for(int i=0; i<n; i++){
            if(nums[i] % 2 == 1){
                count++;
            }

            if (mp.find(count - k) != mp.end()) {
                ans += mp[count - k];
            }

            mp[count]++;
        }

        return ans;
    }
};