class Solution {
public:
    bool isSubsequence(string s, string t) {
        int l = t.length();
        int m = s.length();

        int i=0;
        int j=0;

        while(i < m && j <l){
            if(s[i] == t[j]){
                i++;
            }
            j++;
        }

        return i == m;

    }
};