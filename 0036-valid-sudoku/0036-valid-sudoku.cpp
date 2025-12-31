class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        bool row[9][9] = {false};
        bool col[9][9] = {false};
        bool mat[9][9] = {false};

        for (int i = 0; i < board.size(); i++) {
            for (int j = 0; j < board[0].size(); j++) {
                if (board[i][j] != '.') {
                    int num = board[i][j] - '0' - 1;
                    int mat_num = i / 3 * 3 + j / 3;
                    if (row[i][num] || col[j][num] || mat[mat_num][num]) {
                        return false;
                    } else {
                        row[i][num] = true;
                        col[j][num] = true;
                        mat[mat_num][num] = true;
                    }
                }
            }
        }
        return true;
    }
};