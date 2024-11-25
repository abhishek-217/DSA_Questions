class Solution {
public:
    int maxProduct(vector<int>& arr) {
        int ans = INT_MIN;
        int pro =1;
        int n = arr.size();
        
        for(int i=0; i<n; i++){
            pro = pro * arr[i];
            ans = max(ans,pro);
            
            if(pro == 0){
                pro =1;
            }
        }
        
        // Check in reverse
        pro =1;
        for(int i=n-1; i>=0; i--){
            pro = pro * arr[i];
            ans = max(ans,pro);
            
            if(pro == 0){
                pro =1;
            }
        }
        
        return ans;
    }
};