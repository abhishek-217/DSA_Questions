class Solution {
public:
    int bitwiseComplement(int n) {
        string bin = bitset<32>(n).to_string();

        if(n == 0){
            return 1;
        }

        string nstr = "";
         int pos = bin.find('1');
        bin = bin.substr(pos);

        for(char c: bin){
            if(c == '0'){
                nstr += '1';
            }else{
                nstr += '0';
            }
        }

        int ans = stoi(nstr, 0, 2);

        return ans;

    }
};