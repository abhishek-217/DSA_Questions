class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {

        unordered_map<int, int> mp;

        for (int i : arr) {
            mp[i]++;
        }

        vector<int>freq;

        for(auto i:mp){
            freq.push_back(i.second);
        }

        sort(freq.begin(), freq.end());

        int ans = freq.size();

        for(int i=0; i<freq.size(); i++){
            if(k >= freq[i]){
                k -= freq[i];
                ans--;
            }else{
                break;
            }
        }

        // for(auto i:mp){
        //     if(i.second == 1){
        //         k--;
        //         mp[i.first]--;
                
        //     }

        //     if(k==0){
        //         break;
        //     }
        // }

        // int ans = mp.size();
        // for(auto i:mp){

        //     if(k>0 && i.second >= k){
        //         mp[i.first] -= k;
        //         k -= i.second;

        //     }
        //    if(i.second ==0){
        //     ans--;
        //    }
        // }

        return ans;
    }
};