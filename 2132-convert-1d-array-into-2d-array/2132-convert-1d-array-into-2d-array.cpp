class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>>ans;
        if (original.size() != m * n) {
            return ans;
        }

        int k =0;
        int r=0;
        while(k != m){
            vector<int>res;
            int l=0;
            for(int i=r; i<original.size() && l<n; i++){

                res.push_back(original[i]);
                r++;
                l++;
            }
            k++;
            ans.push_back(res);

        }

        return ans;
    }
};