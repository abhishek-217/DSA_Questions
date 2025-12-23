class Solution {
public:
    int countSeniors(vector<string>& d) {
        
        int count =0;
        int n = d.size();

        for(int i=0; i<n; i++){
            int t = (d[i][11] - '0')*10;
            int p = t + d[i][12] - '0';

            if(p > 60){
                count++;
            }
        }

        return count;
    }
};