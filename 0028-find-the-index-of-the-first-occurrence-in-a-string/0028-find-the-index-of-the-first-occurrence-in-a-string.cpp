class Solution {
public:
    int strStr(string h, string needle) {


        //   return -1;

        int n = needle.size();
        if (n > h.size()) {
            return -1;
        }
        else if(n == h.size() && needle == h){
            return 0;
        }

        for (int i = 0; i < h.size(); i++) {
            string c = h.substr(i, n);

            if (c == needle) {
                return i;
            }
        }

        return -1;
    }
};