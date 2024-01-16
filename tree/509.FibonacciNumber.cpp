/*
 * @lc app=leetcode id=509 lang=cpp
 *
 * [509] Fibonacci Number
 */

// @lc code=start
class Solution
{
public:
    int fib(int n)
    {
        int temp1, temp2, ans;
        temp1 = 0;
        temp2 = 1;
        if (n == 0)
            return temp1;
        if (n == 1)
            return temp2;
        n -= 1;
        while (n--)
        {
            ans = temp1 + temp2;
            temp1 = temp2;
            temp2 = ans;
        }
        return ans;
    }
};
// @lc code=end
