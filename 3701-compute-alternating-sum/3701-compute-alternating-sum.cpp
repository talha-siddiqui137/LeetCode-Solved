class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int len = nums.size();
        int res = 0;

        for (int i = 0; i < len; i++)
        {
            if (i%2 == 0)
            {
                res += nums[i];
            }else
            {
                res -= nums[i];
            }
        }
        return res;
    }
};