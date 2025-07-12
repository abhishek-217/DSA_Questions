class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> freq;

        for (char i : s) {
            freq[i]++;
        }

        vector<pair<char, int>> res;
        for (const auto& [k, v] : freq) {
            res.push_back({k, v});
        }

        
        sort(res.begin(), res.end(), [](const pair<char,int> &a , const pair<char,int> &b){
            return a.second > b.second;
        });
        string ans = "";

        for (auto i : res) {
            ans.append(i.second, i.first);
        }

        return ans;
    }
};