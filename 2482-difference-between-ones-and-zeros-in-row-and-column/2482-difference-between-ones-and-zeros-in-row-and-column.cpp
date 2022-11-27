class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        vector<vector<int>> row, diff;
        for (int i = 0; i < m; ++i) {
            vector<int> temp;
            for (int j = 0; j < n; ++j)
                temp.push_back(grid[i][j]);
            row.push_back(temp);
        }

        for (int i = 0; i < m; ++i)
            for (int j = 0; j < n; ++j)
                if (j != 0) row[i][j] += row[i][j - 1];

        for (int j = 0; j < n; ++j)
            for (int i = 0; i < m; ++i)
                if (i != 0) grid[i][j] += grid[i - 1][j];

        for (int i = 0; i < m; ++i) {
            vector<int> temp;
            for (int j = 0; j < n; ++j)
                temp.push_back(0);
            diff.push_back(temp);
        }

        for (int i = 0; i < m; ++i)
            for (int j = 0; j < n; ++j)
                diff[i][j] = row[i][n - 1] - (n - row[i][n - 1]) + grid[m - 1][j] - (m - grid[m - 1][j]);

        return diff;
    }
};