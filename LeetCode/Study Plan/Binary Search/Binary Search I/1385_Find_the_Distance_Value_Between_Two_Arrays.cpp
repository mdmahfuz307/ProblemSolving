/* 1385. Find the Distance Value Between Two Arrays
https://leetcode.com/problems/find-the-distance-value-between-two-arrays/?envType=study-plan&id=binary-search-i*/
class Solution
{
public:
    int findTheDistanceValue(vector<int> &arr1, vector<int> &arr2, int d)
    {
        int count = 0;
        sort(arr2.begin(), arr2.end());
        for (int i = 0; i < arr1.size(); i++)
        {
            int s = 0;
            int e = arr2.size() - 1;
            while (s <= e)
            {
                int mid = (s + e) / 2;
                if (arr2[mid] <= arr1[i] + d && arr2[mid] >= arr1[i] - d)
                {
                    count++;
                    break;
                }
                else if (arr2[mid] > arr1[i] + d)
                {
                    e = mid - 1;
                }
                else
                {
                    s = mid + 1;
                }
            }
        }
        return arr1.size() - count;
    }
};