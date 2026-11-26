class Solution {
public:
    bool canAliceWin(int n) {
        if(n < 10){
            return false;
        }

        int Alice = 0;
        n = n -10;

        if(n < 9){
            return true;
        }
        n = n-9;
        int stone = 8;

        bool turn = true;
        while( n > 0){
            if(turn){

                if(stone > n){
                    return false;
                }
                turn = false;
                n = n - stone;
                stone--;
                if(n == 0 || n < stone){
                    return true;
                }
            }else{
                if(stone > n){
                    return true;
                }
                turn = true;
                n = n - stone;
                stone--;

                if(n == 0 || n < stone){
                    return false;
                }
            }
        }


        return false;
    }
};