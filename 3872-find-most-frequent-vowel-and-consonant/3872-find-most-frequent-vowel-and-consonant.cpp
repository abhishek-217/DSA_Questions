class Solution {
public:

bool Check(char c){
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}
    int maxFreqSum(string s) {
        unordered_map<char,int>vow;
        unordered_map<char,int>conso;

        for(char c: s){
            if(Check(c)){
                vow[c]++;
            }else{
                conso[c]++;
            }
        }

        int Vmax =0;
        int Cmax =0;

        for(auto &[k,v] : vow){
            Vmax = max(Vmax, v);
        }
        for(auto &[k,v] : conso){
            Cmax = max(Cmax, v);
        }

        return Vmax + Cmax;
    }
};