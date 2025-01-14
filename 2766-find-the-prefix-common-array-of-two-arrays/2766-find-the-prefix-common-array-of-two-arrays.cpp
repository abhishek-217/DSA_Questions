class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int l = A.size();
        vector<int>freq(l+1,0);
        vector<int>ans;

        int common =0;
        for(int i=0; i<l; i++){
            if(++freq[A[i]] == 2){
                common++;
            }
            if(++freq[B[i]] == 2){
                common++;
            }

            ans.push_back(common);
        }

        return ans;
    }
};