class Solution {
public:
    int minOperations(string s) {

        // if(s[0] == '0'){
        //     for(char c : s){

        //     }
        // }

        // if (n % 2 == 0) {
        //     for (int i = 0; i < s.size() - 1; i += 2) {
        //         if (s[i] == s[i+1]){
        //             count++;
        //         }
        //     }
        // }else{
        //     for (int i = 0; i < s.size() - 2; i += 2) {
        //         if (s[i] == s[i+1]){
        //             count++;
        //         }
        //     }

        //     if(s[n-1] == s[n-2]){
        //         count++;
        //     }
            
        // }

        int count1 = 0, count2 =0;
        int n = s.size();
        for(int i=0; i<n; i++){
            char e ;
            if(i % 2 ==0){
                e = '0';
            }else{
             e ='1';
            }


            if(s[i] != e){
                count1++;
            }
        }
        for(int i=0; i<n; i++){
            char e;
            if(i % 2 ==0){
                 e = '1';
            }else{
                 e ='0';
            }


            if(s[i] != e){
                count2++;
            }
        }

        return min(count1, count2);
    }
};