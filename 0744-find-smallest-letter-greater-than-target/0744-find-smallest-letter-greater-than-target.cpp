class Solution {
public:
    char nextGreatestLetter(vector<char>& arr, char tar) {
        int n = arr.size();

        for(int i=0; i<n; i++){
            if(arr[i] > tar){
                return arr[i];
            }
        }

        return arr[0];

    }
};