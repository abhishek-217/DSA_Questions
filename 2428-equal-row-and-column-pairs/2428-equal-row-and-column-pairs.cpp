class Solution {
public:
    int equalPairs(vector<vector<int>>& g) {
        
        int ans =0;
        int n = g.size();
        map<vector<int>,int>rc;
        for(int i=0; i<n; i++){
           rc[g[i]]++;
        }

        for(int j=0; j<n; j++){
            vector<int>col;
            for(int i=0; i<n; i++){
                col.push_back(g[i][j]);
            }
            ans += rc[col];
        }

        return ans;
    }
};