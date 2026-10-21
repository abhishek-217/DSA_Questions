class Solution {
public:
    int minOperations(string s) {
        // int n= s.size();

        // if(n == 2){
        //     return -1;
        // }

        // int op = 0;
        // for(int i=0; i<n; i++){
        //     for(int j=i+1; j<n; j++){
        //         if(s[i] > s[j]){
        //             swap(s[i],s[j]);
        //             op++;
        //         }
        //     }
        // }

        // return op;

        int n = s.size();


        bool sorty = true;
        for(int i=1; i<n; i++){
            if(s[i] < s[i-1]){
                sorty = false;
                break;
            }
        }

        if(sorty){
            return 0;
        }
        if(n == 2){
            return -1;
        }


        // find max-min character
        char mn = *min_element(s.begin(), s.end());
        char mx = *max_element(s.begin(), s.end());

        if (s[0] == mn || s[n - 1] == mx)
            return 1;

        for (int i = 1; i < n - 1; i++) {
            if (s[i] == mn || s[i] == mx)
                return 2;
        }

        return 3;
    }
};