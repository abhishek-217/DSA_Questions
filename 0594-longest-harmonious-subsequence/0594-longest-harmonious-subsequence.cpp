class Solution {
public:
    int findLHS(vector<int>& nums) {

        unordered_map<int, int> freq;

        for (int i = 0; i < nums.size(); i++) {
            freq[nums[i]]++;
        }

        // for(const auto&[k,v] : mp){
        //     res.push_back({k,v});
        // }

        // sort(res.begin(), res.end(),  [](const pair<int,int> &a,
        // pair<int,int> &b){
        //     return a.second > b.second;
        // });

        // for(int i=1; i<res.size(); i++){
        //     if(abs(res[i].first - res[i-1].first) == 1){
        //         return res[i].second + res[i-1].second;
        //     }
        // }

        // return 0;

        int maxLen = 0;
        for (const auto& [num, count] : freq) {
            if (freq.count(num + 1)) {
                maxLen = max(maxLen, count + freq[num + 1]);
            }
        }

        return maxLen;

    }
};
