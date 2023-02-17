/* 35. Search Insert Position
Question :- https://leetcode.com/problems/search-insert-position/description/  */
class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        // As the array is sorted we can apply the binary search
        // Apply the binary search
        int s = 0;
        int e = nums.size() - 1;
        while (s <= e)
        {
            // find the mid
            int mid = s + (e - s) / 2;

            // if the target element is present at the mid position
            if (nums[mid] == target)
            {
                return mid;
            }

            else if (nums[mid] > target)
                e = mid - 1;

            else
            {
                s = mid + 1;
            }
        }
        // If the element is not present then the position of the element will be at low hence return low(s)
        return s;
    }
};