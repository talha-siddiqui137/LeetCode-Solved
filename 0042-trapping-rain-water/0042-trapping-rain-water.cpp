class Solution {
public:
    int trap(vector<int>& height) {

        int totalWater = 0;
        int leftHeight = 0, rightHeight = 0;

        int i = 0;
        int j = height.size() - 1;

        while (i < j) {

            if (height[i] < height[j]) {
                leftHeight = max(leftHeight, height[i]);
                totalWater += max(0, leftHeight - height[i]);
                i++;

            } else {
                rightHeight = max(rightHeight, height[j]);
                totalWater += max(0, rightHeight - height[j]);
                j--;
            }
        }

        return totalWater;
    }
};