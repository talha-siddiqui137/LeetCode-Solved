class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {

        int i = 0;
        int j = numbers.size()-1;
    
        vector<int> ans ;

        while (i<j)
        {
            int p_sum = 0;
            p_sum = numbers[i] + numbers[j];
            if (p_sum>target)
            {
                j--;
            }else if (p_sum<target)
            {
                i++;
            }else if (p_sum == target)
            {
                ans.push_back(i+1);
                ans.push_back(j+1);
                break;
            }  
        }
        return ans;
    }
};