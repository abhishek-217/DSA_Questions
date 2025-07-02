class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>freq;

        for(auto i : arr){
            freq[i]++;
        }

        vector<int>res;
        for(auto &[k,v] : freq){
            res.push_back(v);
        }

        sort(res.begin(), res.end());

        for(int i=1; i<res.size(); i++){
            if(res[i-1] == res[i]){
                return false;
            }
        }

        return true;
    }
};