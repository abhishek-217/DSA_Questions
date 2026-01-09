class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int t) {
        
        int n = arr.size();
        int count = 0;
        int tsum = 0;


        for(int i=0; i<k; i++){
            tsum += arr[i];
        }

        if((int)tsum / k >= t){
            count++;
        }

        for(int i=k; i<n; i++){
            tsum += arr[i];
            tsum -= arr[i-k];


            if((int)tsum / k >= t){
                count++;
            }
           
        }


        return count;

    }
};