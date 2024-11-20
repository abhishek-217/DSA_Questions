class Solution {
public:
    int findLucky(vector<int>& arr) {
        int l = arr.size();

        sort(arr.begin(), arr.end());
        int count =1;
        int res =-1;
        for(int i=1; i<=l; i++){
            if(i<l && arr[i] == arr[i-1]){
                count++;

            }else{
                if(arr[i-1] == count){
                    res = max(res,arr[i-1]);
                }
                count =1;

            }

        }

        return res;
     
    }
};