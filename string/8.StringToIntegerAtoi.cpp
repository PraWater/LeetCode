/*
 * @lc app=leetcode id=8 lang=cpp
 *
 * [8] String to Integer (atoi)
 */

// @lc code=start
class Solution
{
public:
    int myAtoi(string s)
    {
        bool neg{false};
        int i{0};
        stack<int> stack;
        while (s[i] == ' ')
            if (++i == s.length())
                return 0;
        if (s[i] == '-')
        {
            neg = true;
            ++i;
        }
        else if (s[i] == '+')
            ++i;
        while (s[i] == '0')
            if (++i == s.length())
                return 0;
        while (47 < s[i] && s[i] < 58)
        {
            stack.push(s[i]);
            if (++i == s.length())
                break;
        }
        if (stack.size() > 10)
        {
            if (neg)
                return (-1 * (__INT32_MAX__)) - 1;
            return __INT32_MAX__;
            ;
        }
        long ans{0};
        for (int i = 0; stack.size() > 0; ++i)
        {
            ans += (stack.top() - 48) * pow(10, i);
            stack.pop();
        }
        if (neg)
            ans *= -1;
        if (neg && ans < (-1 * (__INT32_MAX__)))
            return (-1 * (__INT32_MAX__)) - 1;
        if (ans > __INT32_MAX__)
            return __INT32_MAX__;
        return ans;
    }
};
// @lc code=end
