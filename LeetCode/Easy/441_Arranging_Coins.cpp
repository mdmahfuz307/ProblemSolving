class Solution
{
public:
   int arrangeCoins(int n)
   {
      int s = 1, e = n;
      long mid = 0;
      while (s <= e)
      {
         mid = s + (e - s) / 2;
         long total = (mid * (mid + 1)) / 2;
         if (total == n)
            return mid;
         else if (total < n)
            s = mid + 1;
         else
            e = mid - 1;
      }
      return e;
   }
};