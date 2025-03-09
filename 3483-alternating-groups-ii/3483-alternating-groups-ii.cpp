class Solution {
public:


    //Run time error 

    // bool check(vector<int>& col){
    //     for(int i=1; i<col.size(); i++){
    //         if(col[i] == col[i-1]){
    //             return false;
    //         }
    //     }
    //     return true;
    // }
    
    int numberOfAlternatingGroups(vector<int>& col, int k) {

        for(int i=0; i<k-1; i++){
            col.push_back(col[i]);
        }
        int l = col.size();
        int ans =0;

       
       int left =0, right =1;

       while (right < l) {
            if (col[right] == col[right - 1]) {
                left = right;
                right++;
                continue;
            }

            right++;

            if (right - left < k) continue;

            ans++;
            left++;
        }

        return ans;
    }
};