class Solution {
public:
    bool isPowerOfFour(int n) {
        for(int i=0; i<31; i++){
            double r = pow(4,i);
            if(r == n){
                return true;
            }
        }

        return false;
    }
};