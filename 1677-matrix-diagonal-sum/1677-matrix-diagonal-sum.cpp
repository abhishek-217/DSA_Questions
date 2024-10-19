class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int ans =0;
        int l = mat.size();
        int k =l-1;
        if(l == 1){
            return mat[0][0];
        }

        if(l % 2 == 0){

            for(int i =0; i<l; i++){
                ans = ans+ mat[i][i];
            }
            for(int i = 0 ; i<l; i++){
                ans = ans + mat[i][k];
                k--;
            }

        }else{

            for(int i =0; i<l; i++){
                ans = ans+ mat[i][i];
            }
            for(int i = 0 ; i<l; i++){
                ans = ans + mat[i][k];
                k--;
            }

            ans = ans- mat[l/2][l/2];

        }


        return ans;
    }
};