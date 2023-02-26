class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        int s = 0;
        int e = nums.size() - 1;
        int mid = s + (e - s) / 2;

        while (s <= e)
        {
            if (nums[mid] == target)
            {
                return mid;
            }
            else if (target >= nums[0] && nums[mid] < nums[0])
            {
                e = mid - 1;
            }
            else if (target < nums[0] && nums[mid] >= nums[0])
            {
                s = mid + 1;
            }
            else
            {
                // else we are on correct half of array simply apply
                // binary search
                if (target > nums[mid])
                {
                    s = mid + 1;
                }
                else
                {
                    e = mid - 1;
                }
            }
            mid = s + (e - s) / 2;
        }
        return -1;
    }
};

/*

    Time Complexity : O(log N), since we have used binary search to find the target element. The time complexity
    is logarithmic.

    Space Complexity : O(1), since we stored only some constant number of elements, the space complexity is
    constant.

    Solved Using Binary Search + Array.

*/

/*

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        for(int i=0; i<n; i++){
            if(nums[i] == target){
                return i;
            }
        }
        return -1;
    }
};


*/

/*

    Time Complexity : O(N), because in the worst case, the target element may be present at the end of the array.
    Thus the time complexity is linear.

    Space Complexity : O(1), the space complexity is constant.

    Solved Using Linear Search + Array.

*/