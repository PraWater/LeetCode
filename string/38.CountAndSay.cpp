/*
 * @lc app=leetcode id=38 lang=cpp
 *
 * [38] Count and Say
 */

// @lc code=start
class Solution
{
public:
    string countAndSay(int n)
    {
        string ans{"1"};
        n--;
        while (n--)
        {
            string temp = "";
            for (int j = 0; j < ans.size(); ++j)
            {
                char x = ans[j];
                int count{0};
                while (ans[j] == x)
                {
                    ++j;
                    ++count;
                    if (j == ans.size())
                        break;
                }
                --j;
                temp = temp + to_string(count) + x;
            }
            ans = temp;
        }
        return ans;
    }
};
// @lc code=end
