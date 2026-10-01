class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int st = 0;
        int end = nums.size()-1;

        if(nums.size() == 1){
            return nums[0];
        }

        while (st <= end)
        {
            int mid = st + (end - st)/2;
            
            if(mid == 0 || mid == nums.size()-1){
                return nums[mid];
            }
            if ((nums[mid] != nums[mid+1]) && (nums[mid] != nums[mid-1]))
            {
                return nums[mid];
            }else if ((nums[mid] == nums[mid - 1]))
            {
                if ((mid - 1)%2 == 0)
                {
                    st = mid+1;
                }else
                {
                    end = mid - 2;
                }
            }else if ((nums[mid] == nums[mid + 1]))
            {
                if ((mid)%2 == 0)
                {
                    st = mid+2;
                }else
                {
                    end = mid - 1;
                }            
            }
        }
        return 0;
    }
};