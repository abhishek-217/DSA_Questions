class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        
        int l = nums.size();
        priority_queue<pair<int, int>>que;

        for(auto i =0; i<l; i++){
            que.push({nums[i], i});
        }
        vector<pair<int,int>>res;

        while(k-- && !que.empty()){

            pair<int, int> top = que.top();
            que.pop();

            res.push_back(top);
        }

        
        sort(res.begin(), res.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
            return a.second < b.second;
        });
            
        vector<int>ans;

        for(auto i:res){
            ans.push_back(i.first);
        }
        return ans;

    }
};