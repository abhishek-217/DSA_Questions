class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dim) {
        int n = dim.size();

        double maxD =0;
        int index =0;
        int ans =0;

        for(int i=0; i<n; i++){
            double dlen = sqrt(dim[i][0] * dim[i][0] + dim[i][1]*dim[i][1]);

            if(dlen > maxD){
                maxD = dlen;
                index = i;
                ans = dim[index][0] * dim[index][1];
            }else if(dlen == maxD){
                int res = dim[i][0] * dim[i][1];
                ans = max(ans,res);
            }

        }


        // return dim[index][0] * dim[index][1];
        return ans;
    }
};