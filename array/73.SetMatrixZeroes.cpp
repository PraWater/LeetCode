/*
 * @lc app=leetcode id=73 lang=cpp
 *
 * [73] Set Matrix Zeroes
 */

// @lc code=start
class Solution
{
public:
    void setZeroes(vector<vector<int> > &matrix)
    {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<bool> row(m, false);
        vector<bool> col(n, false);
        for (int i = 0; i < m; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                if (matrix[i][j] == 0)
                {
                    row[i] = true;
                    col[j] = true;
                }
            }
        }
        for (int i = 0; i < m; ++i)
        {
            if (row[i])
            {
                for (int j = 0; j < n; ++j)
                    matrix[i][j] = 0;
            }
        }
        for (int i = 0; i < n; ++i)
        {
            if (col[i])
            {
                for (int j = 0; j < m; ++j)
                    matrix[j][i] = 0;
            }
        }
    }
};
// @lc code=end
