class Solution {
public:
    int minChanges(string s) {
        int l = s.size();

        int count =0;
        for(int i=0; i<l-1; i = i+2){
            if(s[i] != s[i+1]){
                count++;
            }

        }

        return count;
    }
};