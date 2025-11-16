class Solution {
public:

    // int mod = 10e7;
    const int mod = 1000000007;
    int numSub(string s) {
        int n = s.length();
        int one = 0;
        int ans = 0;
        for(int i = 0;i<n;i++){
            if(s[i] == '1'){
                one++;
                ans = (ans+one)%mod;
            }
            else{
                one = 0;
            }
        }

        return ans;
    }
};