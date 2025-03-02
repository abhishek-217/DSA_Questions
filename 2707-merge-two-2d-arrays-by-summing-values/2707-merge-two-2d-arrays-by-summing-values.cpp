class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& n1, vector<vector<int>>& n2) {
        vector<vector<int>>ans;

        map<int,int>mp;

        for(auto& r : n1){
            mp[r[0]] = r[1];
        }
        for(auto& r : n2){
            mp[r[0]] =  mp[r[0]] +  r[1];
        }

        for(auto&[key,val]: mp){
            ans.push_back({key,val});
        }


        return ans;
    }
};