class Solution
{
public:
    int findKthPositive(vector<int> &arr, int k)
    {
        int s = 0;
        int e = arr.size();
        int count = 0;

        while (s < e)
        {
            int mid = s + (e - s) / 2;

            if (arr[mid] - (mid + 1) >= k)
                e = mid;
            else
                s = mid + 1;
        }
        return s + k;
    }
};