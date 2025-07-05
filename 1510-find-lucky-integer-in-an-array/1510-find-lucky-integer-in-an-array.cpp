class Solution {
public:
    int findLucky(vector<int>& arr) {
        // int l = arr.size();

        // sort(arr.begin(), arr.end());
        // int count =1;
        // int res =-1;
        // for(int i=1; i<=l; i++){
        //     if(i<l && arr[i] == arr[i-1]){
        //         count++;

        //     }else{
        //         if(arr[i-1] == count){
        //             res = max(res,arr[i-1]);
        //         }
        //         count =1;

        //     }

        // }

        // return res;

        unordered_map<int,int>freq;

        for(int i: arr){
            freq[i]++;
        }

        vector<int>ans;

        for(auto &[k,v] : freq){
            if(k == v){
                ans.push_back(k);
            }
        }

        if(ans.size() == 1){
            return ans[0];
        }

        if(ans.size() > 1){
            int max = ans[0];
            for(int i=1; i< ans.size(); i++){
                if(max < ans[i]){
                    max = ans[i];
                }
            }

            return max;
        }

        return -1;
     
    }
};