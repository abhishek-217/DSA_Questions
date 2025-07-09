class Solution {
public:
    int maxFreeTime(int eventTime, int k, vector<int>& s, vector<int>& e) {

        int n = s.size(), res =0;
        
        vector<int>sum(n+1);

        for(int i=0; i<n; i++){
            sum[i+1] = sum[i] + e[i] - s[i];
        }

        for(int i = k-1; i<n; i++){
            int right =0, left =0;
            if(i == n-1){
                right = eventTime;
            }else{
                right = s[i+1];
            }

            if(i == k-1){
                left = 0;
            }else{
                left = e[i-k];
            }

            res = max(res, right - left - (sum[i + 1] - sum[i - k + 1]));
        }

        return res;
    }
};