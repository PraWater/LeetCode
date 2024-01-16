/*
 * @lc app=leetcode id=75 lang=cpp
 *
 * [75] Sort Colors
 */

// @lc code=start
class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        int arr[3] = {0};
        for (auto num : nums)
        {
            ++arr[num];
        }
        for (int i = 0; i < nums.size(); ++i)
        {
            if (i < arr[0])
            {
                nums[i] = 0;
            }
            else if (i < arr[0] + arr[1])
            {
                nums[i] = 1;
            }
            else
            {
                nums[i] = 2;
            }
        }
    }
};
// @lc code=end
