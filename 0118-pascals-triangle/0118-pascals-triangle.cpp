class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;

        for(int r =0; r < numRows; r++){

            vector<int>res;

            Build_Tri(r, 0, 1, res);

            ans.push_back(res);
        }


        return ans;
    }

    void Build_Tri(int n, int k, long long val, vector<int>&ans){
        if(k > n){
            return;
        }

        ans.push_back(val);

        long long next_val = val * (n - k) / (k + 1);
        
        Build_Tri(n,k+1,next_val, ans);
    }
};