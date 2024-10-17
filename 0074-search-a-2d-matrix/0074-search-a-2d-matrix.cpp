class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int l = matrix.size();
        
        for(int i =0; i<l; i++){
            for(int j =0; j<matrix[i].size(); j++){
                if(matrix[i][j] == target){
                    return true;
                }
            }
        }

        return false;
    }
};