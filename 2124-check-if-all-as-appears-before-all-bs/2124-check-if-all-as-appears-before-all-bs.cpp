class Solution {
public:
    bool checkString(string s) {
        bool checkA = false;
        bool checkB = false;
        // int cA=0, cB =0;

        for(char c: s){
            if( c == 'a'){
                // cA++;
                checkA = true;

                if(checkB){
                    return false;
                }
            }else{
                // cB++;
                checkB = true;
                
            }
        }


        return true;
    }
};