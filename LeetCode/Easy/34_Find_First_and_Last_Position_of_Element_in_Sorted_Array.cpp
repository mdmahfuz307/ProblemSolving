class Solution
{
public:
    vector<int> searchRange(vector<int> &nums, int target)
    {
        if (nums.size() == 0)
            return {-1, -1};
        return {first_index(nums, target), last_index(nums, target)};
    }

    // Min template
    int first_index(vector<int> &nums, int target)
    {
        int s = 0, e = nums.size() - 1;
        while (s < e)
        {
            int mid = s + (e - s) / 2;
            if (nums[mid] >= target)
                e = mid;
            else
                s = mid + 1;
        }
        if (nums[s] != target)
            return -1;
        return s;
    }

    // Max template
    int last_index(vector<int> &nums, int target)
    {
        int s = 0, e = nums.size() - 1;
        while (s < e)
        {
            int mid = s + ceil((e - s) / 2.0);
            if (nums[mid] <= target)
                s = mid;
            else
                e = mid - 1;
        }
        if (nums[s] != target)
            return -1;
        return s;
    }
};

/*
Time Complexity : O(log N), since we have used binary search to find the target element. The time complexity
is logarithmic.

Space Complexity : O(1), since we stored only some constant number of elements, the space complexity is
constant.

Solved using Binary Search.
*/
