class Solution
{
public:
    int splitNum(int num)
    {
        string s = to_string(num);
        sort(s.begin(), s.end());
        string u = "", k = "";

        for (int e = 0; e < s.length(); e += 2)
            u += s[e];
        for (int e = 1; e < s.length(); e += 2)
            k += s[e];
        int p = stoi(u);
        int q = stoi(k);
        return p + q;
    }
};