class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n);
        
        int left = 0, right = n - 1;
        int pos = n - 1;  

        while(left <= right) {
            int l_sq = nums[left] * nums[left];
            int r_sq = nums[right] * nums[right];

            if(l_sq > r_sq) {
                res[pos] = l_sq;
                left++;
            } else {
                res[pos] = r_sq;
                right--;
            }
            pos--;
        }

        return res;
    }
};