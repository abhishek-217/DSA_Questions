class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        vector<string> res;

        int n = words.size();
        map<string, int> mp;
        for (auto w : words) {
            mp[w]++;
        }

        vector<pair<string, int>> vec(mp.begin(), mp.end());

        sort(vec.begin(), vec.end(), [](const pair<string, int>& a, const pair<string, int>& b) {

                if (a.second == b.second)
                    return a.first < b.first; 
                    
                return a.second > b.second;   
             });

        for (auto& p : vec) {
            res.push_back(p.first);
            k--;

            if (k == 0) {
                break;
            }
        }

        return res;
    }
};