class Solution {
public:
    int gcdOfOddEvenSums(int n) {

        int odd=0;
        int even =0;

        for(int i=1; i< 2*n; i+=2){
            
            odd += i;
            
        }
        for(int i=2; i< 2*n+1; i+= 2){
            even += i;
        }

        while(odd > 0 && even >0){
            if(odd > even){
                odd = odd % even;
            }else{
                even = even % odd;
            }
        }


        if( odd == 0){
            return even;
        }

        return odd;

        // return odd+even;
    
    }
};