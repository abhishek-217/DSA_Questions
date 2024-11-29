class Solution {
public:
    int heightChecker(vector<int>& heights) {
       int n = heights.size();
       vector<int>res;
       int ans =0;

       for(int i=0; i<n; i++){
            res.push_back(heights[i]);
       }

       sort(res.begin(), res.end());
        for(int j =0; j<n; j++){
            if(heights[j] != res[j]){
                ans++;
            }
        }

        return ans;
    }
};