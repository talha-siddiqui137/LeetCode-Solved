class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maximum = prices[0];
        int minimum = prices[0];
        int res = 0;

        for (int i = 1; i < prices.size() ; i++)
        {
            if (prices[i]<minimum)
            {
                minimum = prices[i];
                maximum = prices[i];
            }else if (maximum<prices[i])
            {
                maximum = prices[i];
                if ((prices[i] - minimum)>res){
                    res = prices[i] - minimum;
                }
            }
        }

    
        return res;
    }
};