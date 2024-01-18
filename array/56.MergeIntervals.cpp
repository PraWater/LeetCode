/*
 * @lc app=leetcode id=56 lang=cpp
 *
 * [56] Merge Intervals
 */

// @lc code=start
class Solution
{
public:
    vector<vector<int> > merge(vector<vector<int> > &intervals)
    {
        auto cmp1 = [](const vector<int> &a, const vector<int> &b)
        { return a[0] < b[0]; };
        vector<vector<int> > ans;
        ans.reserve(intervals.size());
        sort(intervals.begin(), intervals.end(), cmp1);
        for (int i = 0; i < intervals.size(); ++i)
        {
            int x = intervals[i][0];
            int y = intervals[i][1];
            while (i + 1 < intervals.size() && y >= intervals[i + 1][0])
            {
                y = max(y, intervals[i + 1][1]);
                ++i;
            }
            ans.push_back({x, y});
        }
        return ans;
    }
};
// @lc code=end
