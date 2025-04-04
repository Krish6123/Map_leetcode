
class Solution {
    public:
        bool isValidSudoku(vector<vector<char>>& board) {
            vector<unordered_set<char>> rows(9), cols(9), boxes(9);
    
            for (int r = 0; r < 9; r++) {
                for (int c = 0; c < 9; c++) {
                    char num = board[r][c];
                    if (num == '.') continue;
    
                    int boxIndex = (r / 3) * 3 + (c / 3);
                    
                    if (rows[r].count(num) || cols[c].count(num) || boxes[boxIndex].count(num))
                        return false;
    
                    rows[r].insert(num);
                    cols[c].insert(num);
                    boxes[boxIndex].insert(num);
                }
            }
            return true;
        }
    };
    