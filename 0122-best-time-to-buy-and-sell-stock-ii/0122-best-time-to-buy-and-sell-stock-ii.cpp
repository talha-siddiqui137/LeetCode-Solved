class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int res = 0;
        int i = 1;
        int j = prices.size();

        while(i<j)
        {
            if (prices[i-1]<prices[i])
            {
                res =res + (prices[i]-prices[i-1]);
            }

            i++;
        }
        
        return res;

    }
};