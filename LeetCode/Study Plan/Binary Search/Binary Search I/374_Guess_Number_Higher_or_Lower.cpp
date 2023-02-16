/**
374. Guess Number Higher or Lower
 */

class Solution
{
public:
    int guessNumber(int n)
    {
        int s = 1;
        int e = n - 1;
        while (s <= e)
        {
            int mid = s + (e - s) / 2; // here mid is our guessed number

            if (guess(mid) == 1)
            {
                s = mid + 1;
            }
            else if (guess(mid) == -1)
            {
                e = mid - 1;
            }
            else if (guess(mid) == 0)
            {
                return mid;
            }
        }
        return n;
    }
};