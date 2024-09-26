class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int cnt = 0;
        for(int i : nums){  // 0 ^ 0 = 0  , n ^ n = 0 , n ^ 0 = n;
            cnt = cnt ^ i;
        }
        return cnt;
    }
};