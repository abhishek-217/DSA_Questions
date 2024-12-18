class Solution {
public:
    vector<int> finalPrices(vector<int>& p) {
        int l = p.size();
        for(int i=0; i<l; i++){
            for(int j = i+1; j<l; j++){
                if(p[j] <= p[i]){
                    p[i] = p[i] - p[j];
                    break;
                }
            }
        }

        return p;
    }
};