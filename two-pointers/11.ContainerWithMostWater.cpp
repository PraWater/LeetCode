/*
 * @lc app=leetcode id=11 lang=cpp
 *
 * [11] Container With Most Water
 */

// @lc code=start
class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int ans{0}, r, l{0};
        r = height.size() - 1;
        while (l < r)
        {
            int temp = (r - l) * min(height[l], height[r]);
            ans = max(ans, temp);
            if (height[l] > height[r])
                --r;
            else
                ++l;
        }
        return ans;
    }
};
// @lc code=end
