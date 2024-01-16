/*
 * @lc app=leetcode id=17 lang=cpp
 *
 * [17] Letter Combinations of a Phone Number
 */

// @lc code=start
class Solution
{
public:
    vector<string> letterCombinations(string digits)
    {
        if (digits == "")
            return {};
        int size{1};
        char arr[8][4] = {
            {'a', 'b', 'c', '!'}, {'d', 'e', 'f', '!'}, {'g', 'h', 'i', '!'}, {'j', 'k', 'l', '!'}, {'m', 'n', 'o', '!'}, {'p', 'q', 'r', 's'}, {'t', 'u', 'v', '!'}, {'w', 'x', 'y', 'z'}};
        for (int i = 0; i < digits.length(); ++i)
        {
            if (digits[i] == '9' | digits[i] == '7')
                size *= 4;
            else
                size *= 3;
        }
        vector<string> ans(size, "");
        int x{size};
        for (int i = 0; i < digits.length(); ++i)
        {
            int y{3};
            if (digits[i] == '9' | digits[i] == '7')
                y = 4;
            x /= y;
            for (int j = 0; j < size; ++j)
            {
                ans[j] += arr[digits[i] - 50][(j / x) % y];
            }
        }
        return ans;
    }
};
// @lc code=end
