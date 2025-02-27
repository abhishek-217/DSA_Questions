class Solution {
public:
    int mostFrequentEven(vector<int>& nu) {
        unordered_map<int,int>mp;

        for(int i=0; i<nu.size(); i++){
            if(nu[i] % 2 == 0){
                mp[nu[i]]++;
            }
        }

        int ans = -1;
        int freq = 0;
        for(auto &[key,val]: mp){
            if(freq < val || (val == freq && ans > key)){
                freq = val;
                ans = key;
            }
            
        }

        return ans;
    }
};