/*
 * @lc app=leetcode id=28 lang=cpp
 *
 * [28] Find the Index of the First Occurrence in a String
 */

// @lc code=start
class Solution
{
public:
    int strStr(string haystack, string needle)
    {
        int n = needle.size(), i;
        int ans{-1};
        for (int i = 0; i < haystack.size(); i++)
        {
            bool check = true;
            for (int j = 0; j < n; j++)
            {
                if (needle[j] != haystack[i + j])
                {
                    check = false;
                    break;
                }
            }
            if (check)
            {
                ans = i;
                break;
            }
        }
        return ans;
    }
};
// @lc code=end
