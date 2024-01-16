/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */

// @lc code=start
class Solution
{
public:
    bool isPalindrome(int x)
    {
        string s = to_string(x);
        bool palindrome = true;
        int n = s.size();
        for (int i = 0; i < n / 2; i++)
        {
            if (s[i] != s[n - 1 - i])
            {
                palindrome = false;
                break;
            }
        }
        return palindrome;
    }
};
// @lc code=end
