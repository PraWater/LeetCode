/*
 * @lc app=leetcode id=3 lang=cpp
 *
 * [3] Longest Substring Without Repeating Characters
 */

// @lc code=start
class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        if (s.length() == 0)
            return 0;
        int beg{0};
        vector<int> arr(s.length());
        unordered_set<char> letters;
        letters.insert(s[0]);
        arr[0] = 1;
        for (int i = 1; i < s.length(); ++i)
        {
            if (letters.count(s[i]) > 0)
            {
                while (s[beg] != s[i])
                {
                    letters.erase(s[beg]);
                    beg++;
                }
                ++beg;
                arr[i] = i - beg + 1;
            }
            else
            {
                letters.insert(s[i]);
                arr[i] = arr[i - 1] + 1;
            }
        }
        int ans{0};
        for (int i = 0; i < s.length(); ++i)
        {
            ans = max(ans, arr[i]);
        }
        return ans;
    }
};
// @lc code=end
