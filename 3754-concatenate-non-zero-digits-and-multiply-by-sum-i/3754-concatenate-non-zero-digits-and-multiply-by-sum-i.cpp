class Solution {
public:
    long long sumAndMultiply(int n) {
        int multiples = 1;
        long long new_num = 0;
        int sum = 0;

        while (n > 0)
        {
            int reminder = n % 10;
            n = n/10;

            if (reminder != 0)
            {
                new_num = (reminder * multiples) + new_num;
                sum += reminder;
                multiples *= 10;
            }  
        }
        new_num *= sum;

        return new_num ;
    }
};