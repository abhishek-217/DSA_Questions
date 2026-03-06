class Solution {
public:
    bool checkOnesSegment(string s) {
        // int n = s.size();

        // if(n == 1 || s == "10"){
        //     return true;
        // }

        // int ones =0;

        // for(int i=1; i<n; i++){
        //     if(s[i] == '1'){
        //         ones++;
        //     }
        //     if(s[i] == '1' && s[i-1] == '1'){
        //         return true;
        //     }
        // }

        // if(ones == 1){
        //     return true;
        // }

        // return false;

        for(int i = 0 ; i < s.size() - 1 ; i++){
            if(s[i] == '0' && s[i+1] == '1'){
                return false;
            }
        }
        return true;
    }
};