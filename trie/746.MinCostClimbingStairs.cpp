/*
 * @lc app=leetcode id=746 lang=cpp
 *
 * [746] Min Cost Climbing Stairs
 */

// @lc code=start
class Solution
{
public:
    int minCostClimbingStairs(vector<int> &cost)
    {
        vector<int> check(cost.size() + 1, -1);
        check[0] = 0;
        check[1] = 0;
        for (int i = 2; i <= cost.size(); i++)
        {
            check[i] = min(check[i - 1] + cost[i - 1], check[i - 2] + cost[i - 2]);
        }
        return check[cost.size()];
    }
};
// @lc code=end
