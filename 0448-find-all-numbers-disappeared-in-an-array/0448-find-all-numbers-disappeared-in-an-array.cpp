class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        
      int n=nums.size();
        vector<int> ans;
        unordered_set<int> st;
        for(int i=0;i<n;i++){
            st.insert(nums[i]);
        }
        for(int i=1;i<n+1;i++){
            auto x=st.find(i);
            if (x==st.end()){
                ans.push_back(i);
            }
        }
        return ans;
    }
};