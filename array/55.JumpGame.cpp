/*
 * @lc app=leetcode id=55 lang=cpp
 *
 * [55] Jump Game
 */

// @lc code=start
class Solution
{
public:
    bool jump(vector<int> &nums, vector<bool> &jumps, int i)
    {
        if (i + nums[i] >= nums.size() - 1)
            return true;
        if (nums[i] == 0)
            return false;
        bool ret = false;
        for (int j = 1; j <= nums[i]; ++j)
        {
            if (jumps[i + j])
            {
                ret = jump(nums, jumps, i + j);
                if (ret)
                    return true;
                jumps[i + j] = false;
            }
        }
        return false;
    }

    bool canJump(vector<int> &nums)
    {
        vector<bool> jumps(nums.size(), true);
        return jump(nums, jumps, 0);
    }
};
// @lc code=end
