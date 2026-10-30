class Solution {
public:
    int shortestPath(int n, vector<vector<int>>& edges, string labels, int k) {
        vector<vector<pair<int, int>>> adj(n);
        for (auto e : edges)
            adj[e[0]].push_back({e[1], e[2]});

        vector<vector<long long>> dist(n, vector<long long>(k + 1, LLONG_MAX));

      
        priority_queue<tuple<long long, int, int>,
                       vector<tuple<long long, int, int>>,
                       greater<tuple<long long, int, int>>>
            pq;

        dist[0][1] = 0;
        pq.push({0, 0, 1});

        while (!pq.empty()) {
            auto [d, u, r] = pq.top();
            pq.pop();

            if (d > dist[u][r])
                continue;

 
            if (u == n - 1)
                return (int)d;

            for (auto [v, w] : adj[u]) {
                
                int g = (labels[v] == labels[u]) ? r + 1 : 1;

                if (g > k)
                    continue;

                long long nd = d + w;

            
                if (nd < dist[v][g]) {
                    dist[v][g] = nd;
                    pq.push({nd, v, g});
                }
            }
        }

      
        return -1;
    }
};