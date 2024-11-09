class Solution {
public:
    long long minEnd(int n, int x) {
        
        long ans = x;
        while(n != 1){
            ans = x | ans+1;
            n--;
        }

        return ans;

    }
};