class Solution
{
public:
    char nextGreatestLetter(vector<char> &letters, char target)
    {
        int s = 0;
        int e = letters.size() - 1;
        int mid;
        while (s < e)
        {
            mid = s + (e - s) / 2;
            if (letters[mid] <= target)
                s = mid + 1;
            else
                e = mid;
        }
        if (letters[s] > target)
            return letters[s];
        else
            return letters[0];
    }
};

/* STL Solution
int index = upper_bound(letters.begin(),letters.end(),target) - letters.begin();
        if(index >= letters.size()) return letters.front();
        else return letters[index];
*/