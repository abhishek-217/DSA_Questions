class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& val) {
        int l = val.size();
        int maxi =0;
        int maxin = val[0];

        // for(int i=0; i<l; i++){
        //     for(int j = i+1; j<l; j++){
        //         int ans = (val[i] + i) + (val[j] - j);
        //         maxi = max(maxi,ans);
        //     }
        // }
        for(int i=1; i<l; i++){
            maxi = max(maxi, maxin+ val[i] -i);
            maxin = max(maxin, val[i] + i);
        }

        return maxi;
    }
};