/*
 * @lc app=leetcode id=64 lang=cpp
 *
 * [64] Minimum Path Sum
 */

// @lc code=start
class Solution
{
public:
    int func(vector<vector<int> > &grid, vector<vector<int> > &dp, int i, int j, int m, int n)
    {
        dp[i][j] = grid[i][j];
        if (i == m && j == n)
            dp[i][j] += 0;
        else if (i == m)
        {
            if (dp[i][j + 1] > -1)
                dp[i][j] += dp[i][j + 1];
            else
                dp[i][j] += func(grid, dp, i, j + 1, m, n);
        }
        else if (j == n)
        {
            if (dp[i + 1][j] > -1)
                dp[i][j] += dp[i + 1][j];
            else
                dp[i][j] += func(grid, dp, i + 1, j, m, n);
        }
        else
        {
            int temp1, temp2;
            if (dp[i][j + 1] > -1)
                temp1 = dp[i][j + 1];
            else
                temp1 = func(grid, dp, i, j + 1, m, n);
            if (dp[i + 1][j] > -1)
                temp2 = dp[i + 1][j];
            else
                temp2 = func(grid, dp, i + 1, j, m, n);
            dp[i][j] += min(temp1, temp2);
        }
        return dp[i][j];
    }

    int minPathSum(vector<vector<int> > &grid)
    {
        int n = grid[0].size();
        int m = grid.size();
        vector<vector<int> > dp(m, vector<int>(n, -1));
        return func(grid, dp, 0, 0, m - 1, n - 1);
    }
};
// @lc code=end
