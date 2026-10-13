class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        vector<int>arr;
        for(int i: nums){
            if(i < 0){
                arr.push_back(abs(i));
            }else{
                arr.push_back(i);
            }
        }

        sort(arr.begin(), arr.end());
        int i=0, j=arr.size()-1;

        long long ans =0;
        while(i<j){
            ans += (arr[j]*arr[j]) - (arr[i]*arr[i]);
            i++;
            j--;
        }
        if(arr.size() % 2 != 0){
            ans += (arr[i]*arr[i]);
        }

        return ans;
    }
};