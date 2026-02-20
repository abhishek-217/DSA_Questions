class Solution {
public:
    vector<int> twoSum(vector<int>& num, int t) {
        
        int n  = num.size();

        int s =0;
        int e = n-1;

        while(s<e){
            if(num[s] + num[e] == t){
                return {s+1, e+1};
            }
            if(num[s] + num[e] < t){
                s++;
            }else{
                e--;
            }

        }
        return {};
        
        
    }
};