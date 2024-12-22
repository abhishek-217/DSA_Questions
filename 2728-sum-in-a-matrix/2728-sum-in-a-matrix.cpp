class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) {
        int m = nums.size();
        int n = nums[0].size();

        int score =0;
        for(int i=0; i<m; i++){
            sort(nums[i].begin(), nums[i].end());
        }

        for(int i =0; i<n; i++){
            int maxi =0;
            for(int j =0; j<m; j++){
                maxi = max(maxi, nums[j][i]);
            }
            score += maxi; 
        }

        return score;
    }
};