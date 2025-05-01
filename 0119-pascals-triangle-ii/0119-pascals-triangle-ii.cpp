class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int>ans;

        Build_Tri(rowIndex, 0, 1, ans);


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