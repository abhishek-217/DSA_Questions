class Solution {
public:
    void moveZeroes(vector<int>& nu) {
    
        int l = nu.size();
        vector<int>r(l,0);
        int k=0;

        for(int i=0; i<l; i++){
            if(nu[i] != 0){
                r[k] = nu[i];
                k++;
            }
        }

        nu = r;
    }
};