/*
 * @lc app=leetcode id=70 lang=cpp
 *
 * [70] Climbing Stairs
 */

// @lc code=start
class Solution
{
public:
    int climbStairs(int n)
    {
        if (n == 0)
            return 1;
        else if (n == 1)
            return 1;
        else if (ready[n])
            return value[n];
        else
        {
            int count = climbStairs(n - 1) + climbStairs(n - 2);
            ready[n] = true;
            value[n] = count;
            return count;
        }
    }
};
// @lc code=end
