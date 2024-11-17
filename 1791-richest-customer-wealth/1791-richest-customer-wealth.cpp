class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int rich =0;
        int l = accounts.size();
        int m = accounts[0].size();

        for(int i=0; i<l; i++){
            int cal =0;
            for(int j=0; j<m; j++){
                cal = cal + accounts[i][j];
            }

            if(rich < cal){
                rich = cal;
            }
        }

        return rich;
    }
};