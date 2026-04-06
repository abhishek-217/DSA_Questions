class Solution {
public:
    string customSortString(string order, string s) {
        int n = s.size();

        unordered_map<char, int> mp;
        for (char c : s) {
            mp[c]++;
        }
        string res = "";
        for (char letter : order) {
            while (mp[letter]-- > 0) {
                res += letter;
            }
        }

        for (auto& [letter, count] : mp) {
            while (count-- > 0) {
                res += letter;
            }
        }

    
        return res;
    }
};