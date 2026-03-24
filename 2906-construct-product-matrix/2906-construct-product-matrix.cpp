class Solution {
public:
    vector<vector<int>> constructProductMatrix(vector<vector<int>>& g) {

        // int n = g.size();
        // int m = g[0].size();

        // vector<vector<int>>res;
        // long long ans = 1;

        // for(int i =0; i<n; i++){
        //     for(int j =0; j<m; j++){
        //         ans = (ans * g[i][j]);
        //     }
        // }
        // for(int i =0; i<n; i++){
        //     vector<int>temp;
        //     for(int j =0; j<m; j++){

        //         int p = (ans/g[i][j]) % 12345;
        //         temp.push_back(p);
        //     }

        //     res.push_back(temp);
        // }

        // return res;

        int n = g.size();
        int m = g[0].size();
        int mod = 12345;

        vector<vector<int>> res(n, vector<int>(m, 1));

        int prod = 1;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                res[i][j] = prod;
               prod = ( (long long)prod * g[i][j] ) % mod;
            }
        }

    
        prod = 1;
        for (int i = n - 1; i >= 0; i--) {
            for (int j = m - 1; j >= 0; j--) {
                res[i][j] = (res[i][j] * prod) % mod;
                prod = ( (long long)prod * g[i][j] ) % mod;
            }
        }

        return res;
    }
};