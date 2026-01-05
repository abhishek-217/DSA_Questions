class Solution {

public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        // int n = matrix.size();
        // long long sum = 0;
        // int minAbs = INT_MAX;
        // int negCount = 0;

        // for (int i = 0; i < n; i++) {
        //     for (int j = 0; j < n; j++) {
        //         int val = matrix[i][j];
        //         sum += abs(val);
        //         minAbs = min(minAbs, abs(val));
        //         if (val < 0) {
        //             negCount++;
        //         }
        //     }
        // }

        // if (negCount % 2 != 0) {
        //     sum -= 2 * minAbs;
        // }

        // return sum;



        int n = matrix.size();
        long long sum =0;
        int Maxabs = INT_MAX;

        int count =0;

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                int val = matrix[i][j];
                sum += abs(val);

                Maxabs = min(Maxabs, abs(val));

                if(val < 0){
                    count++;
                }
            }
        }

        if(count % 2 != 0){
            sum -= 2*Maxabs;
        }
        

        return sum;
    }
};