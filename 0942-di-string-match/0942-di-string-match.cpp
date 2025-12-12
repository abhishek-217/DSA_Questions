class Solution {
public:
    vector<int> diStringMatch(string s) {
        
        int n = s.size();
        int st =0, e = n;

        vector<int>res;

        for(int i=0; i<n; i++){
            if(s[i] == 'I'){
                res.push_back(st);
                st++;
            }else{
                res.push_back(e);
                e--;

            }
        }
        res.push_back(e);

        return res;

    }
};