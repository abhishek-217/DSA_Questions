class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {
        int n=nums.size();
        unordered_map<int, int>mpp;
        for(int i=0;i<n-1;i++){
            if(nums[i]==key){
                mpp[nums[i+1]]++;
            }
        }
        int res=0;
        int maxi=0;
        for(auto x:mpp){
            if(maxi<x.second){
                maxi=x.second;
                res=x.first;
            }
        }
        return res;
    }
};