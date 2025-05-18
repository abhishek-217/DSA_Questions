class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& mat) {
        vector<int>rmin;
        vector<int>cmax;
        int r = mat.size();
       

        for(int i=0; i<r; i++){
            int min = mat[i][0];
            for(int j = 1; j<mat[i].size(); j++){
                if(min > mat[i][j]){
                    min = mat[i][j];
                }
            }
            rmin.push_back(min);
        }
        for(int i=0; i<mat[0].size(); i++){
            int max = mat[0][i];
            for(int j = 1; j<r; j++){
                if(max < mat[j][i]){
                    max = mat[j][i];
                }
            }
            cmax.push_back(max);
        }

        vector<int>res;

        for(int i=0; i<r; i++){
            for(int j=0; j<mat[0].size(); j++){
                if(mat[i][j] == rmin[i] && mat[i][j] == cmax[j]){
                    res.push_back(mat[i][j]);
                }
            }
        }

        return res;
    }
};