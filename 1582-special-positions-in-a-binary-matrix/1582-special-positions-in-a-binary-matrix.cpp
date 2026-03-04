class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();

        // int[] r = new int[m];
        // int[] c = new int[n];
        vector<int>r(m);
        vector<int>c(n);

        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){

                if(mat[i][j] == 1){
                    r[i]++;
                    c[j]++;

                }
            }
        }

        int ans =0;

        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(mat[i][j] == 1 && r[i] == 1 && c[j] == 1){
                   ans++;
                }
                
            }
        }

        return ans;
        
    }
};