class Solution {
public:
    int findPeakElement(vector<int>& n) {
        int s =0;
        int e = n.size()-1;
        int maxi =0;
       
        while(s<e){
            if(n[s]>=n[e]){
               e--;
               maxi = s;
            }else{
                s++;
                maxi = e;
            }
            
        }

        return maxi;
    }
};