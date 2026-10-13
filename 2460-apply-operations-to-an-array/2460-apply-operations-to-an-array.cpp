class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        if (nums.size() == 1)
        {
            return nums;
        }
    
        if (nums.size() == 2)
        {
            if (nums[0] == 0)
            {
                swap(nums[0],nums[1]);
            }
        
            return nums;
        }
    
        int i = 0;
        while (i<nums.size()-1)
        {
            if (nums[i] == nums[i+1])
            {
                nums[i] = nums[i]*2;
                nums[i+1] = 0;
                i+=2;
            }else
            {
                i++;
            }
        }

        int m = 0;
        int j = 1;

        while (m<nums.size()-1  && j<nums.size()) 
        {
            if (nums[m] != 0 )
            {
                m++;
                j++;
            }else if (nums[m] == 0 && nums[j] != 0)
            {
                swap(nums[m],nums[j]);
                m++;
                j++;
            }else if (nums[m]==0 && nums[j] == 0)
            {
                j++;
            } 
        
        }
        return nums;
    }
};