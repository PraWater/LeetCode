/*
 * @lc app=leetcode id=2739 lang=cpp
 *
 * [2739] Total Distance Traveled
 */

// @lc code=start
class Solution
{
public:
    int distanceTraveled(int mainTank, int additionalTank)
    {
        int ans{0};
        while (mainTank >= 5)
        {
            mainTank -= 5;
            ans += 5;
            if (additionalTank)
            {
                --additionalTank;
                ++mainTank;
            }
        }
        ans += mainTank;
        return ans * 10;
    }
};
// @lc code=end
