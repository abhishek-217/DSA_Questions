class Solution {
public:

    int binaryCount(int x){
        int count =0;

        while(x>0){
            if(x%2 == 1){
                count++;
            }
            x= x/2;
        }
        return count;
    }
    int hammingDistance(int x, int y) {
        
        int n = x^y;
        return binaryCount(n);
    }
};