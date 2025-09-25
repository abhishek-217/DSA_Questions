class Solution {
public:
    int countAsterisks(string s) {

        // int e = s.size();

        // int i = 0;
        // int count = 0;

        // bool flag = false;

        // while (i < e) {
        //     int c = i;

        //     while (c < e && s[c] != '|') {
        //         c++;
        //     }
        //     if (s[c] == '|') {
        //         flag = !flag;
        //     }

        //     if (flag) {

        //         while (i <= c) {
        //             if (s[i] == '*') {
        //                 count++;
        //             }
        //             i++;
        //         }
        //     }else{
        //         i = c+1;
        //     }
        // }

        // return count;

        int count = 0;
        bool inside = false; // true = between bars

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '|') {
                inside = !inside; // flip on each bar
            } else if (!inside && s[i] == '*') {
        
                count++;
            }
        }
        return count;
    }
};