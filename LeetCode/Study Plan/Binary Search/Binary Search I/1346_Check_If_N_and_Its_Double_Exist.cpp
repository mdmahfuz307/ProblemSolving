class Solution
{
public:
    bool checkIfExist(vector<int> &arr)
    {
        int n = arr.size();
        sort(arr.begin(), arr.end());
        for (int i = 0; i < n - 1; i++)
        {
            int start, end;
            if (arr[i] < 0)
                start = 0, end = i - 1;
            else
                start = i + 1, end = n - 1;

            while (start <= end)
            {
                int mid = start + (end - start) / 2;
                if (arr[mid] == 2 * arr[i])
                    return true;
                else if (arr[mid] > 2 * arr[i])
                {
                    end = mid - 1;
                }
                else
                {
                    start = mid + 1;
                }
            }
        }
        return false;
    }
};

/*

bool checkIfExist(vector<int>& arr) {
        unordered_set<int> set;
        for(int i=0;i<arr.size();i++){
            if(set.count(2*arr[i])>0 || ((arr[i]%2==0) && set.count(arr[i]/2)>0))
                return true;
            set.insert(arr[i]);
        }
        return false;
    }

*/