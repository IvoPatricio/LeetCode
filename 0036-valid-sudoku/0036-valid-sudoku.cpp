class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for (int i = 0; i < board.size(); i++)
        {
            std::unordered_set<char> checkRows;
            for (int x = 0; x < board[i].size(); x++)
            {
                if (board[i][x] != '.')
                {
                    if (checkRows.count(board[i][x]) == 1)
                        return false;
                    checkRows.insert(board[i][x]);
                }
            }
        }
        for (int i = 0; i < board[0].size(); i++)
        {
            std::unordered_set<char> checkCollums;
            for (int x = 0; x < board.size(); x++)
            {
                if (board[x][i] != '.')
                {
                    if (checkCollums.count(board[x][i]) == 1)
                        return false;
                    checkCollums.insert(board[x][i]);
                }
            }
        }
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                std::unordered_set<char> grid;
                for (int row = i * 3; row < i * 3 + 3; row++)
                {
                    for (int col = j * 3; col < j * 3 + 3; col++) 
                    {
                        if (board[row][col] != '.') 
                        {
                            if (grid.count(board[row][col]) == 1)
                                return false;
                            grid.insert(board[row][col]);
                        }
                    }
                }
            }
        }
        return true;
    }
};