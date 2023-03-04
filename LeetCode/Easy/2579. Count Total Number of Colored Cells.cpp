class Solution
{
public:
    long long coloredCells(long long z)
    {
        return (z) * (z) + (z - 1) * (z - 1);
    }
};