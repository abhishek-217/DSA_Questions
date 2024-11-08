class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int l = matrix.size();
        vector<vector<int>>res;

        for(int j = 0; j<l; j++){
           vector<int>mat;
           for(int i = 0; i<l; i++){
                mat.push_back(matrix[i][j]);
           }
           
           reverse(mat.begin(), mat.end());
           res.push_back(mat);
        }

        matrix = res;
    }
};