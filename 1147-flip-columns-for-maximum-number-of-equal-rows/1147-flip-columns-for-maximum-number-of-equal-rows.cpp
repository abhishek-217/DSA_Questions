class Solution {
public:
    int maxEqualRowsAfterFlips(vector<vector<int>>& matrix) {

        unordered_map<string, int>res;

        for(auto &r : matrix){
            string norm, flip;
            for(auto &c : r){
                norm += to_string(c);
                flip += to_string(1-c);
            }

            string key = min(norm,flip);
            res[key]++;

        }

        int max_count =0;

        for(auto &entry : res){
            max_count = max(max_count, entry.second);
        }
    

        return max_count;
    }
};
