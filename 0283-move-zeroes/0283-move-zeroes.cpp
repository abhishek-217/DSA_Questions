class Solution {
public:
    void moveZeroes(vector<int>& nu) {
        int nb=0;
        for (int i=0;i<nu.size();i++){
            if (nu[i]==0){
                nu.erase(nu.begin()+i);
                i--;
                nb++;
            }
        }
        for (int i=0;i<nb;i++){
            nu.push_back(0);
        }
    }
};