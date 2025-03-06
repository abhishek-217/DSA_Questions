class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& g) {
        int n = g.size();
        map<int,int>mp;
        vector<int>ans;

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                mp[g[i][j]]++;
            }
        }

        for(auto& [key,val]:mp){
            if(val == 2){
                ans.push_back(key);
            }
        }
        
        
        int total = (n*n*(n*n+1)/2);
        int curr =0;
        for (const auto &pair : mp) {
            curr += pair.first; 
        }

        ans.push_back(total - curr);

        return ans;

    }
};