class SegmentTree {
private:
    int n;
    vector<int> tree;

public:
    SegmentTree(int size) : n(size), tree(4 * size, 0) {}

    void build(const vector<int>& arr, int node, int start, int end) {
        if (start == end) {
            tree[node] = arr[start];
            return;
        }
        int mid = start + (end - start) / 2;
        build(arr, 2 * node, start, mid);
        build(arr, 2 * node + 1, mid + 1, end);
        tree[node] = tree[2 * node] ^ tree[2 * node + 1];
    }

    void update(int node, int start, int end, int idx, int val) {
        if (start == end) {
            tree[node] = val;
            return;
        }
        int mid = start + (end - start) / 2;
        if (idx <= mid) {
            update(2 * node, start, mid, idx, val);
        } else {
            update(2 * node + 1, mid + 1, end, idx, val);
        }
        tree[node] = tree[2 * node] ^ tree[2 * node + 1];
    }

    int query(int node, int start, int end, int l, int r) {
        if (r < start || end < l)
            return 0;
        if (l <= start && end <= r)
            return tree[node];
        int mid = start + (end - start) / 2;
        return query(2 * node, start, mid, l, r) ^
               query(2 * node + 1, mid + 1, end, l, r);
    }
};

class Solution {
private:
    vector<vector<int>> adj;
    vector<int> parent, depth, heavy, head, pos;
    int cur_pos;

    int dfs_size(int v, int p, int d) {
        int size = 1;
        int max_c_size = 0;
        depth[v] = d;
        parent[v] = p;
        heavy[v] = -1;

        for (int c : adj[v]) {
            if (c != p) {
                int c_size = dfs_size(c, v, d + 1);
                size += c_size;
                if (c_size > max_c_size) {
                    max_c_size = c_size;
                    heavy[v] = c;
                }
            }
        }
        return size;
    }

    void dfs_hld(int v, int h) {
        head[v] = h;
        pos[v] = cur_pos++;

        if (heavy[v] != -1) {
            dfs_hld(heavy[v], h);
        }

        for (int c : adj[v]) {
            if (c != parent[v] && c != heavy[v]) {
                dfs_hld(c, c);
            }
        }
    }

    int query_path(int u, int v, SegmentTree& seg, int n) {
        int total_mask = 0;
        while (head[u] != head[v]) {
            if (depth[head[u]] > depth[head[v]]) {
                swap(u, v);
            }
            total_mask ^= seg.query(1, 0, n - 1, pos[head[v]], pos[v]);
            v = parent[head[v]];
        }
        if (depth[u] > depth[v]) {
            swap(u, v);
        }
        total_mask ^= seg.query(1, 0, n - 1, pos[u], pos[v]);
        return total_mask;
    }

public:
    vector<bool> palindromePath(int n, vector<vector<int>>& edges, string s,
                                vector<string>& queries) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        adj.assign(n, vector<int>());
        for (const auto& e : edges) {
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }

        parent.assign(n, 0);
        depth.assign(n, 0);
        heavy.assign(n, -1);
        head.assign(n, 0);
        pos.assign(n, 0);
        cur_pos = 0;

        dfs_size(0, 0, 0);
        dfs_hld(0, 0);

        vector<int> initial_arr(n, 0);
        for (int i = 0; i < n; i++) {
            initial_arr[pos[i]] = (1 << (s[i] - 'a'));
        }

        SegmentTree seg(n);
        seg.build(initial_arr, 1, 0, n - 1);

        vector<bool> answer;

        for (const string& q : queries) {
            if (q[0] == 'u') {
                // Parse "update ui c"
                int u = 0;
                int i = 7;
                while (q[i] != ' ') {
                    u = u * 10 + (q[i] - '0');
                    i++;
                }
                char c = q[i + 1];
                seg.update(1, 0, n - 1, pos[u], (1 << (c - 'a')));
            } else {
                // Parse "query ui vi"
                int u = 0, v = 0;
                int i = 6;
                while (q[i] != ' ') {
                    u = u * 10 + (q[i] - '0');
                    i++;
                }
                i++;
                while (i < q.size()) {
                    v = v * 10 + (q[i] - '0');
                    i++;
                }

                int mask = query_path(u, v, seg, n);
                answer.push_back((mask & (mask - 1)) == 0);
            }
        }

        return answer;
    }
};