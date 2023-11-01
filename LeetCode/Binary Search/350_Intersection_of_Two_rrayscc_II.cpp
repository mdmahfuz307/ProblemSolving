class Solution
{
public:
    vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
    {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        vector<int> sst;

        for (int i = 0; i < nums1.size(); i++)
        {
            int s = 0;
            int e = nums2.size() - 1;
            while (s <= e)
            {
                int mid = (s + e) / 2;
                if (nums2[mid] == nums1[i])
                {
                    sst.push_back(nums2[mid]);
                    nums2.erase(nums2.begin() + mid);
                    break;
                }
                if (nums2[mid] > nums1[i])
                {
                    e = mid - 1;
                }
                else
                {
                    s = mid + 1;
                }
            }
        }
        return sst;
    }
};