class Solution {
public:
    bool isPowerOfThree(int n) {
        for(int i=0; i<31; i++){
            
            double r = pow(3, i);
            if(r == n){
                return true;
            }
        }

        return false;
    }
};