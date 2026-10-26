class Solution {
public:
    long long dfs(int r, int c, vector<vector<bool>>& vis,
                  vector<vector<int>>& grid) {
        vis[r][c] = true;

        int m = grid.size();
        int n = grid[0].size();

        int delrow[] = {-1, 0, 1, 0};
        int delcol[] = {0, 1, 0, -1};

        long long sum = grid[r][c];

        for (int i = 0; i < 4; i++) {
            int nr = r + delrow[i];
            int nc = c + delcol[i];

            if (nr >= 0 && nr < m && nc >= 0 && nc < n && grid[nr][nc] > 0 &&
                !vis[nr][nc]) {
                sum += dfs(nr, nc, vis, grid);
            }
        }

        return sum;
    }

    int countIslands(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();

        vector<vector<bool>> vis(m, vector<bool>(n, false));

        int ans = 0;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] > 0 && !vis[i][j]) {
                    long long islandSum = dfs(i, j, vis, grid);

                    if (islandSum % k == 0)
                        ans++;
                }
            }
        }

        return ans;
    }
};