class Solution {
public:
    bool isPalindrome(int x) {
        int compare = x;
        long long res = 0;
        if (x<0)
        {
            return false;
        }else
        {
            while (x>0)
            {
                int modulo = x%10;
                x = x/10;
                res = (res * 10) + modulo;
            }
            return res == compare;
        }
    }
};