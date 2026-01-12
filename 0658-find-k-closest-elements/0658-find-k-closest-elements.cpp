class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {

        int n = arr.size();

        priority_queue<pair<int, int>>pq;
        vector<int> res;

        for (int i = 0; i < n; i++) {

            pq.push({abs(arr[i] - x), arr[i]});

            while (pq.size() > k) {
                pq.pop();
            }
        }

        while (!pq.empty()) {
            auto [a, b] = pq.top();
            res.push_back(b);

            pq.pop();
        }

        sort(res.begin(), res.end());

        return res;
    }
};