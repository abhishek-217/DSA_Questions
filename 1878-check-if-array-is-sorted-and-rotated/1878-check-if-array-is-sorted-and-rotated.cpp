class Solution {
public:
    bool check(vector<int>& A) {
        int n = A.size();
        vector<int>B = A;

        sort(B.begin(), B.end());

        for(int i=0; i<n; i++){
            bool match = true;
            for(int j=0; j<n; j++){

                if(B[j] != A[(i+j) % n]){
                    match = false;
                    break;
                }
           }

           if(match){
            return true;
           }

        }

        return false;
    }
};