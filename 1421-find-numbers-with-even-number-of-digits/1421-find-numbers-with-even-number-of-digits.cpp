class Solution {
public:
    int findNumbers(vector<int>& nums) {
        
        int ans =0;

        for(int i: nums){
            int l = to_string(i).size();

            if(l % 2 == 0){
                ans++;
            }
        }

        return ans;
    }
};