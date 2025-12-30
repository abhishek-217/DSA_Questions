class Solution {
public:
    int numMagicSquaresInside(vector<vector<int>>& g) {

        int m = g.size();
        int n = g[0].size();

        if (m < 3 || n < 3) {
            return 0;
        }

        unordered_map<int, int> mp;
        int count = 0;
        for (int i = 0; i <= m - 3; i++) {
            for (int j = 0; j <= n - 3; j++) {
                if (isMagicSQ(g, i, j)) {
                    count++;
                }
            }
        }

        return count;
    }

    bool isMagicSQ(vector<vector<int>>& grid, int r, int c) {
        
        bool seen[10] = {false};
        for (int i = r; i < r + 3; i++) {
            for (int j = c; j < c + 3; j++) {
                int num = grid[i][j];
                if (num < 1 || num > 9 || seen[num]) {
                    return false;
                }
                seen[num] = true;
            }
        }

        // Check all sums equal to 15
        int target = 15;

        // Rows
        for (int i = 0; i < 3; i++) {
            if (grid[r + i][c] + grid[r + i][c + 1] + grid[r + i][c + 2] !=
                target) {
                return false;
            }
        }

        // Columns
        for (int j = 0; j < 3; j++) {
            if (grid[r][c + j] + grid[r + 1][c + j] + grid[r + 2][c + j] !=
                target) {
                return false;
            }
        }

        // Diagonals
        if (grid[r][c] + grid[r + 1][c + 1] + grid[r + 2][c + 2] != target) {
            return false;
        }
        if (grid[r][c + 2] + grid[r + 1][c + 1] + grid[r + 2][c] != target) {
            return false;
        }

        return true;
    }
};