class Solution {
public:
    int numOfPairs(vector<string>& nums, string tar) {
        int l = nums.size();
        int count =0;

        for(int i=0; i<l; i++){
            for(int j=0; j<l; j++){
                if(i==j){
                    continue;
                }
                string ans = nums[i] + nums[j];
                if(ans == tar){
                    count++;
                }
            }
        }

        return count;
    }
};