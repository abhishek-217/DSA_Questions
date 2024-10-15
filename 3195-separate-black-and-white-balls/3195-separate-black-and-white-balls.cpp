class Solution {
public:
    long long minimumSteps(string s) {
        long l = s.size();
        long count =0;
        long Zcount =0;
        long Count = 0;

        for(long i =l-1; i>=0; i--){
            if(s[i] == '0'){
                Zcount++;
            }else if(s[i] == '1'){
                Count = Count + Zcount;
            }
        }

        return Count;
    }
};
