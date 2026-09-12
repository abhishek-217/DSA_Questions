class Solution {
public:
    int maxProfit(vector<int>& pri) {
        
        int profit =0;
        for(int i=1; i<pri.size(); i++){
            if(pri[i] > pri[i-1]){
                profit += (pri[i] - pri[i-1]);
            }

        }

        return profit;
        
    }
};