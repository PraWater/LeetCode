/*
 * @lc app=leetcode id=198 lang=cpp
 *
 * [198] House Robber
 */

// @lc code=start
class Solution
{
public:
    int solve(vector<int> &nums, vector<int> &check, int i)
    {
        if (check[i] > -1)
            return check[i];
        int x = nums[i];
        int y = 0;
        if (i < nums.size() - 2)
            y = max(y, solve(nums, check, i + 2));
        if (i < nums.size() - 3)
            y = max(y, solve(nums, check, i + 3));
        check[i] = x + y;
        return check[i];
    }

    int rob(vector<int> &nums)
    {
        vector<int> check(nums.size(), -1);
        if (nums.size() == 1)
            return nums[0];
        if (nums.size() == 2)
            return max(nums[0], nums[1]);
        return max(solve(nums, check, 0), solve(nums, check, 1));
    }
};
// @lc code=end
