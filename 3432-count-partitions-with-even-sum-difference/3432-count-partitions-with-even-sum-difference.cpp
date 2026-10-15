class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int total = 0;

        for(int val: nums){
            total+=val;
        }
    
        int current_total = 0;
        int count = 0;

        for (int i = 0; i < nums.size()-1; i++)
        {
            current_total += nums[i];
            int difference = abs(current_total - (total - current_total));
            if (difference%2 == 0)
            {
                count++;
            } 
        }

        return count;
    }
};