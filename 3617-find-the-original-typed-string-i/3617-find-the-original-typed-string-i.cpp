class Solution {
public:


    int possibleStringCount(string word) {



        int l = word.size();

        int res =1;

        for(int i=1; i<l; i++){
            if(word[i-1] == word[i]){
                res++;
            }
        }

        return res;
        
        // unordered_map<char,int>freq;

        // for(auto c : word){
        //     freq[c]++;
        // }
        // int count =1;

        // for(auto [k,v] : freq){
        //     if(v > 1){
        //         int ans = v -1;
        //         count += ans;
        //     }
        // }

        // return count;
    }
};