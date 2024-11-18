class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int l = code.size();

        vector<int>res(l,0);
        if(k==0){
            return res;

        }else if(k<0){
            for(int i=0; i<l; i++){
                int K =k;
                while(K!=0){
                    int idx = (i+K+l)%l;
                    res[i] = res[i] + code[idx];
                    K++;
                }
            }

        }else{
            for(int i=0; i<l; i++){
                int K =k;
                while(K!=0){
                   int idx = (i+K)%l;
                   res[i]+= code[idx];
                    K--;
                }
            }

        }
        return res;
       
    }
};