class Solution {
public:
    void add(int v, multiset<int>& s, multiset<int>& t, long long& sum, int k) {
        
        if (s.size() < k - 1) {
            s.insert(v);
            sum += v;
            return;
        }

     
        if (v >= *prev(s.end())) {
            t.insert(v);
            return;
        }

        sum += v - *prev(s.end());
        t.insert(*prev(s.end()));
        s.erase(prev(s.end()));
        s.insert(v);
    }

    void rem(int v, multiset<int>& s, multiset<int>& t, long long& sum) {
       
        if (t.count(v)) {
            t.erase(t.find(v));
            return;
        }

        // Subtract the element from the sum and remove it from s
        sum -= v;
        s.erase(s.find(v));

     
        if (!t.empty()) {
            sum += *t.begin();
            s.insert(*t.begin());
            t.erase(t.begin());
        }
    }

    long long minimumCost(vector<int>& a, int k, int d) {
         int n = a.size();
        long long ans = LLONG_MAX, sum = 0;
        multiset<int> s, t;

        // Initialize the multisets and sum for the initial subarray
        for (int i = 1; i <= d + 1; i++) {
            add(a[i], s, t, sum, k);
        }

        for (int i = 1; i + k - 2 < n; i++) {
            ans = min(ans, sum + a[0]);
            if (i + d + 1 < n) {
                add(a[i + d + 1], s, t, sum, k);
            }
            rem(a[i], s, t, sum);
        }

        return ans;
    }
};