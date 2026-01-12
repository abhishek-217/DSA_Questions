class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& p) {
        
        int n = p.size();

        int ans =0;
        for(int i=0; i<n-1; i++){
            int x = p[i][0];
            int y = p[i][1];

            int tx = p[i+1][0];
            int ty = p[i+1][1];

            ans += max(abs(tx-x) ,abs(ty-y));
        }

        return ans;

    }
};