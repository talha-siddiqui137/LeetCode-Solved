class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> res ;
        if(nums.size() == 0){
            return res;
        }
        
        string strs = "";

        int now = nums[0];
        int current = nums[0];


        for (int i = 0; i < nums.size()-1; i++)
        {
            if (nums[i] + 1 != nums[i+1])
            {
                if (now == current)
                {
                    strs = to_string(now);
                    res.push_back(strs);
                    now = nums[i+1];
                }else
                {
                    strs = to_string(now) + "->" + to_string(current); 
                    res.push_back(strs);
                }
                now = nums[i+1];
                current = now;   
            }else
            {
                current = nums[i+1];
            }
        
        }
    
        if (now == current)
        {
            strs = to_string(now);
            res.push_back(strs);
        }else
        {
            strs = to_string(now) + "->" + to_string(current); 
            res.push_back(strs);
        }
    
        return res;
    }
};