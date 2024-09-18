class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        vector<vector<int>> gridResult(grid.size() - 2, vector<int>(grid.size() - 2, 0));

        for (int i = 0; i < grid.size() - 2; ++i)
        {
            for (int x = 0; x < grid.size() - 2; ++x)
            {
                int maxNum = 0;
                for (int z1 = 0; z1 < 3; z1++)
                {
                    for (int z2 = 0; z2 < 3; z2++)
                    {
                        maxNum = max(maxNum, grid[i + z1][x + z2]);
                    }
                }
                gridResult[i][x] = maxNum;
            }
        }
        return gridResult;
    }
};