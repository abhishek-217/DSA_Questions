class Solution {
public:
    string triangleType(vector<int>& nums) {
        
        string e = "equilateral";
        string i = "isosceles";
        string s = "scalene";

        sort(nums.begin(), nums.end());

        if (nums[0] + nums[1] <= nums[2]) {
            return "none";
        }

        if(nums[0] == nums[1] && nums[1] == nums[2]){
            return e;
        }
        if(nums[0] != nums[1] && nums[1] != nums[2]){
            return s;
        }
        
        return i;
    }
};
