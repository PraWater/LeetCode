/*
 * @lc app=leetcode id=977 lang=cpp
 *
 * [977] Squares of a Sorted Array
 */

// @lc code=start
class Solution
{
public:
    vector<int> sortedSquares(vector<int> &nums)
    {
        auto a = nums.begin();
        auto b = nums.end() - 1;
        vector<int> ans(nums.size());
        for (int i = nums.size() - 1; i >= 0; i--)
        {
            if (*b > -1 * (*a))
            {
                ans[i] = (*b) * (*b);
                --b;
            }
            else
            {
                ans[i] = (*a) * (*a);
                ++a;
            }
        }
        return ans;
    }
};
// @lc code=end
