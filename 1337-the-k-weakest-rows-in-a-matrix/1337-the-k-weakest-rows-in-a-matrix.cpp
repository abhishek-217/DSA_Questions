class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        
        int n = mat.size();
        int m = mat[0].size();

        vector<int>res;

        vector<pair<int,int>>arr;
        for(int i=0; i<n; i++){
            int c =0;
            for(int j=0; j<m; j++){
                if(mat[i][j] == 1){
                    c++;
                }
            }

            arr.push_back({c,i});
        }

        sort(arr.begin(), arr.end());

        for(auto &i : arr){
            if(k==0){
                break;
            }
            k--;
            res.push_back(i.second);
        }

        return res;
    }
};