class Solution {
public:

    bool checkCh(string &s){
        for(auto &s1 : s){
            if(s1 >= 97 && s1 <=122){
                return true;
            }
        }


        return false;
    }
    int maximumValue(vector<string>& strs) {
        int res =0;
        int n = strs.size();

        for(auto &s : strs){
            if(checkCh(s)){
                res = max(res, (int)s.size());
            }else{
                res = max(res, stoi(s));

            }
        }

        return res;

    }
};