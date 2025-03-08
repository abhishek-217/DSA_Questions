class Solution {
public:
    int minimumRecolors(string bl, int k) {
        int n = bl.size();
        int maxc = INT_MAX;

        for(int i=0; i<= n-k; i++){
            int Wc = 0;

            for(int j=i; j<i+k; j++){
                if(bl[j] == 'W'){
                    Wc++;
                }
            }

            maxc = min(maxc,Wc);
        }

        return maxc;
    }
};