class Solution {
public:
    int maxSum(vector<int>& nums) {
        int Nmax = nums[0];

        for(int i:nums){
            if(i > Nmax){
                Nmax = i;
            }

        }

        if(Nmax < 0){
            return Nmax;
        }

        unordered_map<int,int>freq;

        for(int i : nums){
            freq[i]++;
        }
        int sum =0;

        for(auto &[k,v]:freq){
            if(k >0){
                sum += k;
            }
        }

        return sum;
    }
};