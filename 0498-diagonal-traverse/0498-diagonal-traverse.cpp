class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        vector<int>res;

        int m = mat.size();
        int n = mat[0].size();

      
       int row =0;
       int col =0;
       bool up = true;

        while(row < m && col <n){
            if(up){
                while(row>0 && col < n-1 ){
                    res.push_back(mat[row][col]);
                    row--;
                    col++;
                }
                res.push_back(mat[row][col]);

                if(col == n-1){
                    row++;
                }else{
                    col++;
                }

            }else{
                while(col>0 && row < m-1 ){
                    res.push_back(mat[row][col]);
                    row++;
                    col--;
                }
                res.push_back(mat[row][col]);

                if(row == m-1){
                    col++;
                }else{
                    row++;
                }
            }

            up = !up;
        }

        return res;
    }
};
