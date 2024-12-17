class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& g) {
        int m = g.size();
        int n = g[0].size();
        int ans =0;

        for(int i=0; i<m; i++){
            sort(g[i].begin(), g[i].end());
        }

        for(int i =0; i<n; i++){
            int maxi = 0;
            for(int j=0; j<m; j++){
                maxi = max(maxi,g[j][i]);
            }
            ans = ans+maxi;
        }

        return ans;

    }
};