class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string> res;
        int l = s.size();
        if (l % k != 0) {
            int p = k - (l % k);

            for (int i = 0; i < p; i++) {
                s += fill;
            }
        }
        for (int i = 0; i < s.size(); i = i + k) {
            string ans = s.substr(i, k);

            res.push_back(ans);
        }

        return res;
    }
};