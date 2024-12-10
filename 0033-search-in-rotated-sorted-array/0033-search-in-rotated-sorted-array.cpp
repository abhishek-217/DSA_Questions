class Solution {
public:
    int search(vector<int>& nu, int tar) {
        int l = nu.size();

        int s =0;
        int e = l-1;
        while(s<=e){
            if(nu[s] == tar){
                return s;
            }else if(nu[e] == tar){
                return e;
            }

            s++;
            e--;
        }

        return -1;
    }
};