class Solution {
public:

    bool areAlmostEqual(string s1, string s2) {
        // unordered_map<char,int>mp1;
        // unordered_map<char,int>mp2;

        // if(s1==s2){
        //     return true;
        // }

        // for(auto c1: s1){
        //     mp1[c1]++;
        // }
        // for(auto c2: s2){
        //     mp2[c2]++;
        // }

        // return compareMaps(mp1,mp2);



        if (s1 == s2) return true;  

        int n = s1.size();
        vector<int> diff;

        for (int i = 0; i < n; i++) {
            if (s1[i] != s2[i]) {
                diff.push_back(i);
            }
        }

  
        if (diff.size() == 2) {
            swap(s1[diff[0]], s1[diff[1]]);
            return s1 == s2;  // After swap, do they match?
        }

        return false;
    }
};