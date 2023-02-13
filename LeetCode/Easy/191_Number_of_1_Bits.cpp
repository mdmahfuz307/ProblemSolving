class Solution
{
public:
    int hammingWeight(uint32_t n)
    {
        int count = 0;
        while (n != 0)
        {
            // chaking last bits
            if (n & 1)
            {
                count++;
            }
            n = n >> 1;
        }
        return count;
    }
};