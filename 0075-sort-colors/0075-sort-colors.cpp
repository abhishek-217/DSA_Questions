class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        int r = 0;
        int w = 0;
        int b = 0;

        vector<int>ans;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == 0){
                r++;
            }else if(nums[i] == 1){
                w++;
            }else{
                b++;
            }
        }

        for(int j=0; j<r; j++){
            ans.push_back(0);
        }
        for(int k=0; k<w; k++){
            ans.push_back(1);
        }
        for(int m=0; m<b; m++){
            ans.push_back(2);
        }

        nums = ans;
    }
};