class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int n = stones.size();

        unordered_map<char,int>mp;

        for(char c: stones){

            mp[c]++;
        }

        int ans =0;
        for(char c: jewels){
            if(mp.find(c) != mp.end()){
                ans += mp[c];
            }
        }

        return ans;
    }
};