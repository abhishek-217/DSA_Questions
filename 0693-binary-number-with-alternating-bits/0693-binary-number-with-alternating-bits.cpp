class Solution {
public:

    string give(int n){

        int len = (int)(log2(n));

        return bitset<64>(n).to_string().substr(64 - len - 1);
    }    
    bool hasAlternatingBits(int n) {
        
        string s = give(n);

        for(int i=1; i<s.size(); i++){
            if(s[i] == s[i-1]){
                return false;
            }
        }


        return true;
    }
};