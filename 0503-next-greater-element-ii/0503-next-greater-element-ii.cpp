class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        // int findMax =0;

        // for(int i:nums){
        //     findMax = max(i,findMax);
        // }


        // for()

        int n = nums.size();
        stack<int>st;
        vector<int>res(n,-1);

        for (int i = 0; i < 2 * n; i++) {
            int idx = i % n;

            while (!st.empty() && nums[idx] > nums[st.top()]) {
                res[st.top()] = nums[idx];
                st.pop();
            }

            // Only push indexes from first pass
            if (i < n) st.push(idx);
        }

        return res;

    }
};