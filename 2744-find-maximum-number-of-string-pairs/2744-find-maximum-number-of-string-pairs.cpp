class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& wo) {
        unordered_map<string, int>mp;

        int n = wo.size();
        int ans =0;

        for(int i=0; i<n; i++){
            string s = wo[i];
            reverse(s.begin(), s.end());

            if(mp[s] > 0){
                ans++;
                mp[s]--;
            }else{

                mp[wo[i]]++;
            }
        }
        

      
        return ans;

    }
};