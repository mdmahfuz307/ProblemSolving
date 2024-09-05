// 69. Sqrt(x)
class Solution
{
public:
    int mySqrt(int x)
    {
        // initializing start and end (Using Binary Search)
        int s = 0;
        int e = x;
        int ans;

        while (s <= e)
        { // initializing middle element
            long long mid = s + (e - s) / 2;
            if (mid * mid == x)
            {
                return mid;
            }
            else if (mid * mid > x)
            {
                e = mid - 1;
            }
            else
            {
                s = mid + 1;
                ans = mid;
            }
        }
        return ans;
    }
};