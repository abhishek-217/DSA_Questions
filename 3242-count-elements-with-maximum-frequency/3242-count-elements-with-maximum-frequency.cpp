class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>freq;

        for(int i=0; i<nums.size(); i++){
            freq[nums[i]]++;
        }

        int Maxans = INT_MIN;
        for(auto i:freq){
           if(i.second >Maxans){
                Maxans = i.second;
           }
        }
        
        int count =0;
        for(auto i:freq){
            if(i.second == Maxans){
                count+= Maxans;
            }
        }

        return count;
    }
};