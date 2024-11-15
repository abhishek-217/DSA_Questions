class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int l = matrix.size();
        int m = matrix[0].size();

        int i=0;
        int j=m-1;

        while(i < l && j>=0){
            if(matrix[i][j] == target){
                return true;

            }else if(matrix[i][j] < target){
                i++;

            }else{
                j--;

            }
        }
        
        return false;
    }
};