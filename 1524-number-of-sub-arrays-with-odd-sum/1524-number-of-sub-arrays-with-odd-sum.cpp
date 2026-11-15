class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        int ans =0, o=0, e=1, sum =0;
        int mod = 1e9 + 7;

        for(int a : arr){
            sum += a;
            if(sum% 2 == 1){
                o++;
                ans += e;
            }else{
                e++;
                ans += o;
            }


            ans = ans% mod;
        }

        return ans;
    }
};