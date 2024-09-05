class Solution
{
public:
    int maxDistance(vector<int> &nums1, vector<int> &nums2)
    {
        int ans = 0;
        for (int i = 0; i < nums1.size(); i++)
        {
            int s = 0, e = nums2.size() - 1;
            int res = 0;
            while (s <= e)
            {
                int m = (s + e) / 2;
                if (nums2[m] >= nums1[i])
                {
                    res = max(res, (m - i));
                    s = m + 1;
                }
                else if (nums2[m] < nums1[i])
                    e = m - 1;
            }
            ans = max(ans, res);
        }
        return ans;
    }
};