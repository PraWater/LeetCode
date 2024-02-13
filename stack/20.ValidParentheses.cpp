/*
 * @lc app=leetcode id=20 lang=cpp
 *
 * [20] Valid Parentheses
 */

// @lc code=start
class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> stack;
        for (auto c : s)
        {
            if (c == '(' || c == '{' || c == '[')
                stack.push(c);
            else
            {
                if (stack.empty())
                    return false;
                if (c == ')')
                {
                    if (stack.top() == '(')
                        stack.pop();
                    else
                        return false;
                }
                else if (c == '}')
                {
                    if (stack.top() == '{')
                        stack.pop();
                    else
                        return false;
                }
                else if (c == ']')
                {
                    if (stack.top() == '[')
                        stack.pop();
                    else
                        return false;
                }
            }
        }
        if (stack.empty())
            return true;
        else
            return false;
    }
};
// @lc code=end
