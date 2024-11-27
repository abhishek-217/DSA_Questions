class Solution {
public:
    bool find132pattern(vector<int>& arr) {
        stack<int>s;
        int n = arr.size();
        int first = INT_MIN;

        for(int i=n-1; i>=0; i--){
            if(arr[i] < first){
                return true;
            }

            while(!s.empty() && arr[i] > s.top()){
                first = s.top();
                s.pop();
            }
            
           s.push(arr[i]);

        }
        return false;
    }
};