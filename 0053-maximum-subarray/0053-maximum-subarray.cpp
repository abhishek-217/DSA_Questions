class Solution {
public:
    int maxSubArray(vector<int>& arr) {
        
        int count = INT_MIN;
        int sum =0;
        int n = arr.size();
        
        for(int i=0; i<n; i++){
            sum = sum + arr[i];
            count = max(count,sum);
            
            if(sum<0){
                sum =0;
            }
        }
        
        return count;
    }
};