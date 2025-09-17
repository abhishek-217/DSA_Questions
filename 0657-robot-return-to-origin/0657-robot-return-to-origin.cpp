class Solution {
public:
    bool judgeCircle(string moves) {
        
        int Rans =0;
        int Uans =0;
        for(char c: moves){
            if(c == 'U'){
                Uans++;
            }else if(c == 'D'){
                Uans--;
            }else if(c == 'R'){
                Rans++;
            }else{
                Rans--;
            }


        }

        return Uans == 0 && Rans == 0;
    }
};