class Solution {
public:

    bool isSymmetric(int num){
        int sum1=0;
        int sum2=0;
        string str = to_string(num);
        int len = str.length();
        int half = len/2;

        if(len % 2 != 0){
            return false;
        }

        for(int i =0; i<half; ++i){
            sum1 = sum1 + str[i] + '0';
            sum2 = sum2 + str[i+half] + '0';
        }

      return sum1==sum2;
    }
    int countSymmetricIntegers(int low, int high) {
        int count = 0;
        for(int i =low; i<=high; ++i){
            if(isSymmetric(i)){
                ++count;
            }
        }
      return count;
    }
};