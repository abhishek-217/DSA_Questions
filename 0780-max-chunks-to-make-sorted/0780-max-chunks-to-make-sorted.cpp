class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int maxi =0;
        int count =0;

        int l = arr.size();

        for(int i=0; i<l; i++){
            maxi = max(maxi, arr[i]);

            if(maxi == i){
                count++;
            }
        }

        return count;
    }
};