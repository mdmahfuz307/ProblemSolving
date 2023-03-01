class Solution
{
public:
    int differenceOfSum(vector<int> &nums)
    {
        int s1 = 0, s2 = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            s1 += nums[i];
            int l = nums[i];
            while (l)
            {
                s2 += l % 10;
                l /= 10;
            }
        }
        return abs(s1 - s2);
    }
};