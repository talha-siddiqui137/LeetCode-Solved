class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        bool p = false, q = false, last = false;
        int increse_count = 0, decrease_count = 0;
        int current_phase = 1;

        if (nums[0]>nums[1])
        {
            return false ;
        }
    
        for (int i = 0; i < nums.size()-1; i++)
        { 
            if (nums[i]==nums[i+1])
            {
                return false;
            }
            if ((nums[i]>nums[i+1]) && (p == false))
            {
                return false;
            }
            if (nums[i]<nums[i+1])
            {
                p = true;
                if (current_phase != 1)
                {
                    increse_count++;
                }
                current_phase = 1; 
            }
            if ((nums[i]>nums[i+1]) && (i !=0) )
            {
                q = true;
            if (current_phase != 0)
            {
                decrease_count++;
            }
            current_phase = 0;
            }
            if ((p == true) && (q == true) && (nums[i]<nums[i+1]))
            {
                last = true;
            }
        }
        if ((p == true) && (q == true) && (last == true) && (increse_count == 1 && decrease_count == 1))
        {
            return true;
        }else
        {
            return false;
        }
    }
};