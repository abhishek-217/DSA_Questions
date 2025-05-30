class Solution {
public:
    int numRabbits(vector<int>& answers) {

        unordered_map<int,int>freq;

        for(int i : answers){
            freq[i]++;
        }
        
        int count = 0;
        for (auto& [k, v] : freq) {
            int groupSize = k + 1;
            int groups = (v + k) / groupSize;
            count += groups * groupSize;
        }

        return count;
    }
};