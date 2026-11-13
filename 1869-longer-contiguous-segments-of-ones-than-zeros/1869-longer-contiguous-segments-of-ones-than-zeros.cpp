class Solution {
public:
    bool checkZeroOnes(string s) {
        int max_ones = 0;
        int max_zeros = 0;

        int current_ones = 0;
        int current_zeros = 0;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
            {
                current_ones++;
                max_ones = max(max_ones, current_ones);
                current_zeros = 0;
            }else{
                current_zeros++;
                max_zeros = max(max_zeros, current_zeros);
                current_ones = 0;
            }  
        }
        return (max_ones > max_zeros ? true : false);
    }
};