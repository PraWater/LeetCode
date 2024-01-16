/*
 * @lc app=leetcode id=1710 lang=cpp
 *
 * [1710] Maximum Units on a Truck
 */

// @lc code=start
class Solution
{
public:
    int maximumUnits(vector<vector<int> > &boxTypes, int truckSize)
    {
        bool static compareUnits(vector<int> a, vector<int> b)
        {
            return (a[1] > b[1]);
        }

        int maximumUnits(vector<vector<int> > & boxTypes, int truckSize)
        {
            sort(boxTypes.begin(), boxTypes.end(), compareUnits);
            int ans{0}, x{0};
            for (int i = 0; i < boxTypes.size(); ++i)
            {
                if (x + boxTypes[i][0] < truckSize)
                {
                    ans += boxTypes[i][0] * boxTypes[i][1];
                    x += boxTypes[i][0];
                }
                else
                {
                    ans += (truckSize - x) * boxTypes[i][1];
                    break;
                }
            }
            return ans;
        }
    }
};
// @lc code=end
