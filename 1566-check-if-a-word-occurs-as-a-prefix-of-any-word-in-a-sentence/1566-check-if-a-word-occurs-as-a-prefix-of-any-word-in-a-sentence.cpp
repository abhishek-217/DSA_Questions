class Solution {
public:
    int isPrefixOfWord(string sen, string sW) {
        int l = sen.size();
        int l1 = sW.size();
        string res = "";
        int ans =1;

        for(int i=0; i<l; i++){
            if(isalpha(sen[i])){
                res+= sen[i];
            }else{
                res = "";
                ans++;
            }

            if(res.substr(0,l1) == sW){
                return ans;
            }
        }

        return -1;
    }
};